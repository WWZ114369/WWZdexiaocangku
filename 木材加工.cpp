#include<iostream>
#include<vector>
using namespace std;
int main ()
{
	int n,k;
	cin>>n>>k;
	int max_a=0;
	int sum=0;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
		if(a[i]>max_a)
		{
			max_a=a[i];
		}
	}
	if(max_a<k)
	{
		cout<<'0';
		return 0;
	}
    int left=max_a/k,right=sum/k;
	while(left<right)
	{
		int mid=left+(right-left)/2;
		int num=0;
		for(int i=0;i<n;i++)
		{
			num+=a[i]/mid;
		}
		if(num>=k)
		{
			left=mid+1;
		}
		else
		{
			right=mid;
		}
	}
	cout<<left-1;
	return 0;
}

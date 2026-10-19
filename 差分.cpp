#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,q;
	cin>>n;
	cin>>q;
	vector<int> arr(n+1,0);
	vector<int> arr1(n);
	for(int i=1;i<n+1;i++)
	{
		cin>>arr[i];
		arr1[i-1]=arr[i]-arr[i-1];
	}
	for(int i=0;i<q;i++)
	{
		int a,b,k;
		cin>>a>>b>>k;
		arr1[a-1]+=k;
		if(b<n)
		{
			arr1[b]-=k;
		}
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr1[i];
		cout<<sum;
	}
	return 0;
}

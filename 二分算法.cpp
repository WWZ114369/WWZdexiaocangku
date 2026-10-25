#include<iostream>
#include<vector>
//#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int target;
	cin>>target;
	int left=0,right=n-1,mid=left+(right-left)/2;
	while(right>left)
	{
		if(arr[mid]<target)
		{
			left=mid+1;
		}
		else
		{
			right=mid;
		}
		mid=left+(right-left)/2;
	}
	if(arr[right]!=target)
	{
		cout<<"error";
		return 0;
	}
	else
	{
		cout<<left+1;
	}
	right=n-1;
	mid=left+(right-left)/2+1;
	cout<<endl;
	while(right>left)
	{
		if(arr[mid]<=target)
		{
			left=mid;
		}
		else
		{
			right=mid-1;
		}
		mid=left+(right-left)/2+1;
	}
	cout<<right+1;
	//int * x=lower_bound(arr,arr+n,target);
	//cout<<x-&arr[0]+1<<endl;
	//int * y=upper_bound(arr,arr+n,target);
	//cout<<y-&arr[0];
	return 0;
}

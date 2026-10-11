#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
	int n=0;
	cin>>n;
	vector<long long> arr(n);
	vector<long long> arr1(n-1);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int j=0;j<n-1;j++)
	{
		arr1[j]=abs(arr[j]-arr[j+1]);
	}
	for(int k=n-2;k>0;k--)
	{
		for(int l=0;l<k;l++)
		{
			if(arr1[l]>arr1[l+1])
			{
				long long t=arr1[l];
				arr1[l]=arr1[l+1];
				arr1[l+1]=t;
			}
		}
	}
	for(int m=0;m<n-1;m++)
	{
		if(m-arr1[m]+1!=0)
		{
			cout<<"Not jolly";
			return 0;
		}
	}
	cout<<"Jolly";
	return 0;
}

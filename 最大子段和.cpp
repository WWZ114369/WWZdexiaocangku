#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int sum=0;
	int n;
	cin>>n;
	vector <int> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int t=arr[0];
	int min_set=0; 
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		t=max(t,sum-min_set);
		min_set=min(sum,min_set);
	}
	cout<<t;
	return 0;
}

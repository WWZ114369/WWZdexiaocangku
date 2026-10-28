#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector <int> arr(n,0);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	int sum=0;
	for(int i=0;i<n/2;i++)
	{
		sum+=arr[n-1-i]-arr[i];
	}
	cout<<sum<<endl;
	return 0;
}

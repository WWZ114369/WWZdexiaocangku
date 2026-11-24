#include<iostream>
using namespace std;
const int N=5001;
int dp[N];
int main()
{
	int arr[N];
	int n;
	cin>>n;
	int max_dp=0;
	for(int i=0;i<n;i++)
	{
		int max_=0;
		cin>>arr[i];
		dp[i]=1;
		for(int j=0;j<i;j++)
		{
			if(dp[j]>max_ && arr[j]<arr[i])
			{
				max_=dp[j];
			}
		}
		dp[i]+=max_;
		if(max_dp<dp[i])
		{
			max_dp=dp[i];
		}
	}
	cout<<max_dp;
	return 0;
}

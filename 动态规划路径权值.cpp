#include<iostream>


using namespace std;


int arr[1001][1001];
int dp[1001][1001];
int max_(int a,int b)
{
	if(a>b)
		return a;
	return b;
}
int main()
{
	int max_sum=0;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cin>>arr[i][j];
			dp[i][j]=arr[i][j]+max_(dp[i-1][j-1],dp[i-1][j]);
			if(dp[i][j]>max_sum)
			{
				max_sum=dp[i][j];
			}
		}
	}
	cout<<max_sum;
	return 0;
}

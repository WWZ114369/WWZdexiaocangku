#include<iostream>
using namespace std;
const int N=501;
int arr[N][N];
long long dp[N][N];
int min_(int a,int b)
{
	if(a>b)
	{
		return b;
	}
	return a;
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>arr[i][j];
			if(i>=2 && j>=2)
			    dp[i][j]=min_(dp[i-1][j],dp[i][j-1])+arr[i][j];
			else if(i==1 && j==1)
				dp[i][j]=arr[i][j];
			else if(i>=2 && j==1)
				dp[i][j]=dp[i-1][j]+arr[i][j];
			else
				dp[i][j]=dp[i][j-1]+arr[i][j];
		}
	}
	cout<<dp[n][m]<<endl;
	return 0;
}

#include<iostream>


using namespace std;

const int N=1001;
int v[N];
int w[N];
int dp[N][N];

int max_(int a,int b)
{
	if(a>b)
		return a;
	return b;
}

int main()
{
	int V,n;
	cin>>n>>V;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=V;j++)
		{
			if(j>=v[i])
			{
				dp[i][j]=max_(dp[i-1][j],w[i]+dp[i-1][j-v[i]]);
			}
			else
			{
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	cout<<dp[n][V]<<endl;
	for (int i = 0; i <= n; i++)
    	for (int j = 0; j <= V; j++)
        	dp[i][j] = -0x3f3f3f3f;
	dp[0][0] = 0;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=V;j++)
		{
			if(j>=v[i])
			{
				dp[i][j]=max_(dp[i-1][j],w[i]+dp[i-1][j-v[i]]);
			}
			else
			{
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	if(dp[n][V]>=0)
	{
		cout<<dp[n][V];
	}
	else
	{
		cout<<"error";
	}
	return 0;
}

#include<iostream>
#include<cstring>
using namespace std;

const int N=1001;
int v[N];
int w[N];
int dp[N];

int max_(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	return b;
}

int main()
{
	memset(dp,-0x3f,sizeof(dp));
	int max_dp=0;
	dp[0]=0;
	int n,V;
	cin>>n>>V;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=V;j++)
		{
			if(j>=v[i])
			{
				dp[j]=max_(dp[j],dp[j-v[i]]+w[i]);
			}
			if(i==n)
			{
				if(max_dp<dp[j])
				{
					max_dp=dp[j];
				}
			}
		}
	}
	cout<<max_dp;
	if(dp[V]>=0)
	{
		cout<<dp[V];
	}
	else
	{
		cout<<"error";
	}
	return 0;
}

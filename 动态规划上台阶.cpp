#include<iostream>
using namespace std;
const int N=1e5+10;
const int MOD=1e5+3;
int dp[N];
int main()
{
	int n,k;
	cin>>n>>k;
	dp[0]=1;
	dp[1]=1;
	for(int i=2;i<=n;i++)
	{
		if(i<k)
		{
			for(int j=1;j<=i;j++)
			{
				dp[i]+=dp[i-j];
				dp[i]%=MOD;
			}
		}
		else
		{
			for(int j=1;j<=k;j++)
			{
				dp[i]+=dp[i-j];
				dp[i]%=MOD;
			}
		}
	}
	cout<<dp[n]<<endl;
	return 0;
}

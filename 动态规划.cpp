#include<iostream>
using namespace std;
const int N=1e5+10;
int dp[N];
int dfs(int n)
{
	if(n==1)
	{
		return 1;
	}
	if(n==2)
	{
		return 2;
	}
	if(n==3)
	{
		return 4;
	}
	if(dp[n]==0)
	{
		dp[n]=dfs(n-1)+dfs(n-2)+dfs(n-3);
	}
	return dp[n];
}
int main()
{
	int n;
	cin>>n;
	cout<<dfs(n);
	return 0;
}

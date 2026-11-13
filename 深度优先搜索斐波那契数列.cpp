#include<iostream>
using namespace std;
int n;
const int N=1e4; 
int f[N];
int dfs(int a)
{
	if(a==0 || a==1)
	{
		return a;
	}
	if(f[a]!=0)
	{
		return f[a];
	}
	f[a]=dfs(a-1)+dfs(a-2);
	return f[a];
}
int main()
{
	cin>>n;
	cout<<dfs(n);
	return 0;
}

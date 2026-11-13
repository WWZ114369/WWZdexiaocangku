#include<iostream>
using namespace std;
int ret;
int n,k;
int function(int a,int b)
{
	if(a%b==0)
	{
		return a/b;
	}
	else
	{
		return a/b+1;
	}
	
}
void dfs(int pos,int begin)
{
	if(begin==0 || pos<=begin+1)
	{
		ret++;
		return;
	}
	for(int max_n=pos-begin+1;max_n>=function(pos,begin);max_n--)
	{
		dfs(pos-max_n,begin-1);
	}
}
int main()
{
	cin>>n>>k;
	dfs(n,k);
	cout<<ret<<endl;
	return 0;
}

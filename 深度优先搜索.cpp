#include<iostream>
const int N=25;
using namespace std;
int arr[N];
int path;
int ret;
int n,k;
bool function(int x)
{
	if(x<=1) return false;
	for(int i=2;i<=x/i;i++)
	{
		if(x%i==0)
		{
			return false;
		}
	}
	return true;
}
void dfs(int pos,int begin)
{
	if(pos>k)
	{
		if(function(path))
		{
			cout<<path<<endl;
			ret++;
		}
		return;
	}
	for(int i=begin;i<=n;i++)
	{
		path+=arr[i];
		dfs(pos+1,i+1);
		path-=arr[i];
	}
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	dfs(1,1);
	cout<<ret<<endl;
	return 0;
}

#include<iostream>
using namespace std;
void dfs(int n,char x,char y,char z);
int main()
{
	int n;
	cin>>n;
	dfs(n,'a','b','c');
	return 0;
}
void dfs(int n,char x,char y,char z)
{
	if(n==0)
	{
		return;
	} 
	dfs(n-1,x,z,y);
	cout<<n<<":"<<x<<"->"<<y<<' '<<endl;
	dfs(n-1,z,y,x);
}

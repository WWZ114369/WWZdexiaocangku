#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> a(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	vector<int> b(n+1,0);
	stack<int> c;
	stack<int> d;
	c.push(a[n]);
	d.push(n);
	for(int i=n-1;i>=1;i--)
	{
		while(!c.empty() && c.top()<=a[i])
		{
			c.pop();
			d.pop();
		}
		if(!c.empty())
		{
			b[i]=d.top();
		}
		c.push(a[i]);
		d.push(i);
	}
	for(int i=1;i<=n;i++)
	{
		cout<<b[i]<<' ';
	}
	return 0;
}

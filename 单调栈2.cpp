#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> h(n);
	vector<int> v(n);
	vector<long long> total(n,0);
	stack<int> a;
	stack<int> d;
	for(int i=0;i<n;i++)
	{
		cin>>h[i];
		cin>>v[i];
	}
	a.push(h[0]);
	d.push(0);
	vector<int> b(n,-1);
	for(int i=1;i<n;i++)
	{
		while(!a.empty() && h[i]>=a.top())
		{
			a.pop();
			d.pop();
		}
		if(!a.empty()) b[i]=d.top();
		if(b[i]!=-1) total[b[i]]+=v[i];
		a.push(h[i]);
		d.push(i);
	}
	vector<int> c(n,-1);
	while(!a.empty())
	{
		a.pop();
		d.pop();
	}
	a.push(h[n-1]);
	d.push(n-1);
	for(int i=n-2;i>=0;i--)
	{
		while(!a.empty() && h[i]>=a.top())
		{
			a.pop();
			d.pop();
		}
		if(!a.empty()) c[i]=d.top();
		if(c[i]!=-1) total[c[i]]+=v[i];
		a.push(h[i]);
		d.push(i);
	}
//	for(int i=0;i<n;i++)
//	{
//		cout<<total[i]<<' ';
//	}
//	cout<<endl;
//	for(int i=0;i<n;i++)
//	{
//		cout<<b[i]<<' ';
//	}
//	cout<<endl;
//	for(int i=0;i<n;i++)
//	{
//		cout<<c[i]<<' ';
//	}
    long long max_=0;
	for(int i=0;i<n;i++)
	{
		if(max_<total[i]) max_=total[i];
	}
	cout<<max_<<endl;
	return 0;
}


#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int k;
	cin>>k;
	stack <char> a;
	a.push(s[0]);
	int num=0;
	int i=1;
	while(num<k && i< (int)s.size())
	{
		while(a.size() && a.top()>s[i] && num<k)
		{
			a.pop();
			num++;
		}
		a.push(s[i]);
		i++;
	}
	while(i< (int) s.size())
	{
		a.push(s[i]);
		i++;
	}
	string s1="";
	while(a.size())
	{
		s1+=a.top();
		a.pop();
	}
	int b=0;
	for(int i=s1.size()-1;i>=k-num;i--)
	{
		if(s1[i]=='0' && b==0) continue;
		cout<<s1[i];
		b=1;
	}
	if (b == 0) cout << "0"; 
	cout<<endl;
	return 0;
}

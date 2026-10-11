#include<iostream> 
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int a=s1.size();
	int b=s2.size();
	long long x=1,y=1;
	for(int i=0;i<a;i++)
	{
		s1[i]-=64;
		x*=s1[i];
	}
	for(int j=0;j<b;j++)
	{
		s2[j]-=64;
		y*=s2[j];
	}
	if(y%47==x%47)
	    cout<<"GO";
	else cout<<"STAY";
	return 0;
}


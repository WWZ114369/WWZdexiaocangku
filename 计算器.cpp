#include<iostream>
#include<math.h>
#include<cmath>
#include<string>
using namespace std;
int main()
{
	double x,y;
	string a,m;
	cout<<"计算机1.0版本！制作：王文哲"<<endl; 
	for(;;)
	{
	cin>>x>>a>>y;
	if(a=="+")
	  cout<<x+y<<endl;
	else if(a=="-")
	       cout<<x-y<<endl;
	else if(a=="*")
	       cout<<x*y<<endl;
	else if(a=="/")
	       cout<<x/y<<endl;
	else if(a=="^")
	       cout<<pow(x,y)<<endl;
	else if(a=="lg")
	       cout<<log10(x)<<endl;
	else break;
	cout<<"输入“quit”以结束，输入“next”以继续。"<<endl; 
	cin>>m;
	if(m=="quit")
	  break;
	}
	cout<<"end";
	return 0;
}

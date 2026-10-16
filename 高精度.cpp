#include<iostream>
using namespace std;
void add(string s,string s1);
void sub(string s,string s1);
void mut(string s,string s1);
int main ()
{
	string s,s1;
	char a;
	cin>>s>>a>>s1;
	if(a=='+') add(s,s1);
	if(a=='-') sub(s,s1);
	if(a=='*') mut(s,s1);
	return 0;
}
void add(string s,string s1)
{
	int sum[501]={0};
	int a=s.size();
	int arr[501]={0};
	for(int i=0;i<a;i++)
	{
		arr[i]=s[a-1-i]-'0';
    }
    int b=s1.size();
	int arr1[501]={0};
	for(int j=0;j<b;j++)
	{
		arr1[j]=s1[b-1-j]-'0';
    }
    int c=max(a,b);
    for(int k=0;k<max(a,b);k++)
    {
    	sum[k]+=arr[k]+arr1[k];
    	sum[k+1]+=sum[k]/10;
    	sum[k]=sum[k]%10;
	}
	if(sum[c]) c++;
	for(int l=c-1;l>=0;l--)
	{
		cout<<sum[l];
	}
}
void sub(string s,string s1)
{
	int sum[501]={0};
	int a=s.size();
	int arr[501]={0};
	for(int i=0;i<a;i++)
	{
		arr[i]=s[a-1-i]-'0';
    }
    int b=s1.size();
	int arr1[501]={0};
	for(int j=0;j<b;j++)
	{
		arr1[j]=s1[b-1-j]-'0';
    }
    int c=max(a,b);
    int e;
    if((a>b) || (a==b && s>s1))     //字符串大小比较是比每位的ASCLL码 
    {
    	e=0;
	    for(int k=0;k<c;k++)
        {
    	    sum[k]=arr[k]-arr1[k];
    	    if(sum[k]<0)
    	    {
    		    arr[k+1]-=1;
    		    sum[k]+=10;
		    }
	    }
    }
    else if((a<b) || (a==b && s<s1)) 
    {
    	e=1;
    	for(int o=0;o<c;o++)
        {
    	    sum[o]=arr1[o]-arr[o];
    	    if(sum[o]<0)
    	    {
    		    arr1[o+1]-=1;
    		    sum[o]+=10;
		    }
	    }
	}
	int d=0;
	for(int m=c-1;m>=0;m--)
	{
		if(sum[m]!=0)
		{ 
		    d=m;
		    break;
	    }
	}
	if(e==1) cout<<'-';
	for(int l=d;l>=0;l--)
	{
		cout<<sum[l];
	}
}
void mut(string s,string s1)
{
	int sum[1001]={0};
	int a=s.size();
	int arr[501]={0};
	for(int i=0;i<a;i++)
	{
		arr[i]=s[a-1-i]-'0';
    }
    int b=s1.size();
	int arr1[501]={0};
	for(int j=0;j<b;j++)
	{
		arr1[j]=s1[b-1-j]-'0';
    }
    int c=max(a,b);
    int d;
    for(int k=0;k<b;k++)
    {
    	if(arr1[k]!=0)
    	{
    		d=k;
    		break;
		}
	}
	int e=0,f=0;
	for(int l=d;l<b;l++)
	{
		e=f;
		for(int m=0;m<a;m++)
		{
			sum[e]+=arr[m]*arr1[l];
			sum[e+1]+=sum[e]/10;
			sum[e]%=10;
			e++;
		}
		f++;
	}
	int g;
	for(int n=a+b-1;n>=0;n--)
	{
		if(sum[n]!=0)
		{
			g=n;
			break;
		}
	}
	for(int o=g;o>=0;o--)
		cout<<sum[o];
	for(int p=1;p<=d;p++)
	    cout<<'0';
}

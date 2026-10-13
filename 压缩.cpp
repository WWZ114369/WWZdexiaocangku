#include<iostream>
using namespace std;
int main()
{
	int N,n,a=0,sum=0,x=0;
	cin>>N;
	while(sum<N*N)
	{
		int d=N-a;
		cin>>n;
		sum+=n;
		if(n<=d)
		{
			for(int j=1;j<=n;j++)
			{
				if(x==0) cout<<'0';
				else cout<<'1';
			}
			if(n==d) 
			{
			    cout<<endl;
			    a=0;
		    }
		    else a=a+n;
		}
		else
		{
			for(int o=1;o<=d;o++)
			{
				if(x==0) cout<<'0';
				else cout<<'1';
			}
			cout<<endl;
			n=n-d;
			int b=n/N;
			if(b!=0)
			{
			    for(int k=1;k<=b;k++)
			    {
				    for(int l=1;l<=N;l++)
				    {
					    if(x==0) cout<<'0';
				        else cout<<'1';
				    }
				    cout<<endl;
			    }
		    }
			int c=n%N;
			if(c!=0)
			{
			    for(int m=1;m<=c;m++)
			    {
				    if(x==0) cout<<'0';
				    else cout<<'1';
			    }
		    }
			a=c;
		}
		x^=1;
	}
	return 0;
}

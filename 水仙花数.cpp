#include<stdio.h>
int function(int a);
int abs(int a,int b);
int main(void)
{
	int N;
	scanf("%d",&N);
	int min=999,m=0;
	for(int i=100;i<1000;i++)
	{
		if(function(i))
		{
			if(abs(N,i)<min)
			{
				min=abs(N,i);
				m=i;
			}
		}
	}
	printf("%d\n",m);
	return 0;
}
int function(int a)
{
	int x=1,y=0;
	int sum=0,b=0;
	int t=a;
	while(a>0)
	{
		b=a%10;
		sum+=b*b*b;
	    a/=10;
	}
	if(sum==t)
	{
		return x;
	}
	else return y;
}
int abs(int a,int b)
{
	if(a>b)
	    return a-b;
	if(a<=b)
	    return b-a;
}

#include<stdio.h>
long long fun(long long a);
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		long long a;
		scanf("%lld",&a);
		printf("%lld\n",fun(a));
	}
	return 0;
}
long long fun(long long a)
{
	long long sum=0;
	while(a>0)
	{
		sum+=a%10;
		a/=10;
		sum*=10;
	}
	sum/=10;
	return sum;
}

#include<stdio.h>
int main ()
{
	long long n;
	scanf("%lld",&n);
	long long sum=0;
	long long max=n;
	while(n!=1)
	{
		if(n%2==0)
		{
			n/=2;
		}
		else
		{
			n=n*3+1;
		}
		sum++;
		if(n>max)
		{
			max=n;
		}
	}
	printf("%lld %lld\n",sum,max);
}

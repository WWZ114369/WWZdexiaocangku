#include<stdio.h>
long long quick_pow(long long a,long long b,long long c);
int main()
{
	long long a,b,c;
	scanf("%lld %lld %lld",&a,&b,&c);
	printf("%lld\n",quick_pow(a,b,c));
	return 0;
}
long long quick_pow(long long a,long long b,long long c)
{
	a%=c;
	long long cnt=1;
	while(b>0)
	{
		if(b&1)
		{
			cnt*=(cnt*a)%c;
		}
		b=b>>1;
		a*=a;
	}
	return cnt%c;
}

#include<stdio.h>
long long gcd(long long a,long long b)
{
	return b==0? a:gcd(b,a%b);
}
int main()
{
	long long a,b;
	scanf("%lld %lld",&a,&b);
	printf("%lld\n",(a/gcd(a,b))*b);
	return 0;
}

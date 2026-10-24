#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	long long sum=0;
	for(int k=0;k<n/2;k++)
	{
		int x=3*k-n;
		int y=2*n-5*k;
		if(x>=0 && y>=0)
		{
			sum++;
		}
	}
	printf("%lld\n",sum);
	return 0;
}
//y=2n-5k
//x=-n+3k

#include<stdio.h>
int main(void)
{
	int h,n;
	scanf("%d %d",&h,&n);
	long long res=1;
	while(n>0)
	{
	    if((n&1)==1)
	    	res*=h;
		h*=h;
		n=(n>>1);
	}
	printf("%lld\n",res);
	return 0;
}

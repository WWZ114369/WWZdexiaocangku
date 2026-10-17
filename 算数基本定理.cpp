#include <stdio.h>
int function(int a);
int main(void) 
{
    long long N;
    scanf("%lld",&N);
    printf("%lld =",N); 
    long long j=2;
    for(;j*j<=N;j++)
    {
    	if(function(j)==0 && N%j==0)
    	{
    		N/=j;
    		printf(" %d *",j);
    		j=1;
		}
	}
	if (N > 1)
	{
        printf(" %d", N);   
    }
    printf("\n");
    return 0;
}
int function(int a)
{
	int b=0;
	for(int i=2;i*i<=a;i++)
	{
		if(a%i==0)
		{
			b=1;
			break;
		}
	}
	if(a==1) b=2;
	if(a==2) b=0;
	return b;
}

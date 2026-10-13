#include<stdio.h>
int main()
{
	for(int t; scanf("%d", &t) != EOF;)
	{
		int sum=0;
		int b=t;
		while(t>0)
		{
			int a=t%10;
			t=t/10;
			sum+=a;
			sum*=10;
		}
		sum/=10;
		if(sum==b)
		{
			printf("1 %d\n",b);
		}
		else printf("0 %d\n",b);
	}
	return 0;
}

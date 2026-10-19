#include<stdio.h>
int main()
{
	for(int t; scanf("%d", &t) != EOF;)
	{
		int b;
		scanf("%d",b);
		int max=b,min=b;
		for(int i=1;i<t;i++)
		{
			int a;
			scanf("%d",&a);
			
			if(a>max) max=a;
			if(a<min) min=a;
		}
		printf("%d\n",max-min);
	}
	return 0;
}

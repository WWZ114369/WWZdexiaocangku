#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	long long arr[94]={0};
	arr[1]=1;
	for(int i=2;i<94;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
	}
	for(int i=0;i<t;i++)
	{
		int n;
		scanf("%d",&n);
		printf("fib(%d)=%lld\n",n,arr[n]);
	}
	return 0;
}

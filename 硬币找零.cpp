#include<stdio.h>
int main()
{
	int arr[]={1,2,5,10,20,50,100};
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int sum=0;
		int m;
		scanf("%d",&m);
		for(int j=6;j>=0;j--)
		{
			if(m>=arr[j])
			{
				sum+=m/arr[j];
				m%=arr[j];
			}
			if(!m)
			    break;
		}
		printf("%d\n",sum);
	}
	return 0;
}


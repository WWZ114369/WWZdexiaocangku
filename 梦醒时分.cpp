#include<stdio.h>
int main()
{
	char A[6],B[6];
	int arr1[4]={0},arr2[4]={0},arr3[4]={0};
	scanf("%s %s",A,B);
	for(int i=0;i<5;i++)
	{
		if(i<2)
		{
			arr1[i]=A[i]-'0';
			arr2[i]=B[i]-'0';
		}
		if(i>2)
		{
			arr1[i-1]=A[i]-'0';
			arr2[i-1]=B[i]-'0';
		}
	}
	for(int i=3;i>=0;i--)
	{
		if(i==3 || i==1)
		{
		    arr3[i]+=arr1[i]+arr2[i];
		    arr3[i-1]+=arr3[i]/10;
		    arr3[i]%=10;
	    }
	    else if(i==2)
	    {
	    	arr3[i]+=arr1[i]+arr2[i];
	    	arr3[i-1]+=arr3[i]/6;
	    	arr3[i]%=6;
		}
		else
		{
			arr3[i]+=arr1[i]+arr2[i];
	    }
	}
	int t=0;
	t+=arr3[0]*10+arr3[1];
	t%=24;
	arr3[0]=t/10;
	arr3[1]=t%10;
	printf("%d%d:%d%d\n",arr3[0],arr3[1],arr3[2],arr3[3]);
	return 0;
}

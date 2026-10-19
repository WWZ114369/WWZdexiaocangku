#include<iostream>
#include <cstring>
using namespace std;
int main()
{
	int arr[5][5]={0};
	int sum=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			char c;
			cin>>c;
			if(c=='1') arr[i][j]=1;
			else arr[i][j]=0;
		}
	}
	int min=7;
	int arr1[5][5]={0};
	for(int i=0;i<1<<5;i++)
	{
		memcpy(arr1, arr, sizeof arr);
		for(int j=0;j<5;j++)
		{
			if(((i>>j)&1)==1)
			{
				arr1[0][j]^=1;
				arr1[1][j]^=1;
				if(j!=0)
				{
					arr1[0][j-1]^=1;
				}
				if(j!=4)
				{
					arr1[0][j+1]^=1;
				}
				sum++;
			}
		}
		for(int i=1;i<5;i++)
	    {
		    for(int j=0;j<5;j++)
		    {
			    if(arr1[i-1][j]!=1)
			    {
			    	arr[i-1][j]^=1;
				    arr1[i][j]^=1;
				    if(i!=4)
				        arr1[i+1][j]^=1;
				    if(j!=0)
				    {
					    arr1[i][j-1]^=1;
				    }
				    if(j!=4)
				    {
					    arr1[i][j+1]^=1;
				    }
				    sum++;
			    }
	        }
	    }
	    int b=0;
	    for(int i=0;i<5;i++)
	    {
		    for(int j=0;j<5;j++)
		    {
			    b+=arr1[i][j];
		    }
	    }
	    if(b==25 && sum<min)
			{
			    min=sum;
			}
	    sum=0;
	}
	cout<<min;
	return 0;
}

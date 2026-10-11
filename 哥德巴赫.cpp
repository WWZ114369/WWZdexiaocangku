#include<iostream> 
using namespace std;
int main()
{
	long long N;
	cin>>N;
	int b=0;
	for(long long i=4;i<=N;i+=2)
	{
			for(long long j=2;j<=i/2;j++)
			{
				long long a=i-j;
				for(long long k=2;k<=j;k++)
				{
					if(j%k==0 && j!=k)
					{
						b=1;
						break;
					}
					b=0;
				}
				if(b==0)
				{
					for(long long l=2;l<=a;l++)
				    {
					    if(a%l==0 && a!=l)
					    {
						    b=1;
						    break;
					    }
					    b=0;
				    }
				}
				if(b==0)
				{
				    cout<<i<<'='<<j<<'+'<<a<<endl;
				    break;
			    }
			}
	}
	return 0;
}


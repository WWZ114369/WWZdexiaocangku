#include<iostream> 
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		double a;
		int t;
		cin>>a>>t;
		for(int j=1;j<=t;j++)
		{
			int b=(int)(a*j);
			ans^=b;
			
		}
	}
	cout<<ans;
	return 0;
}


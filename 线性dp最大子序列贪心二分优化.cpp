#include<iostream>
using namespace std;
const int N=1e5+10;
int a[N];
int dp[N];
int main()
{
	int n;
	int len=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(i==0 || a[i]>dp[len])
		{
			dp[++len]=a[i];
		}
		else
		{
			int l=1,r=len;
			while(r>l)
			{
				int mid=(l+r)/2;
				if(dp[mid]>=a[i])
				{
					r=mid;
				}
				else
				{
					l=mid+1;
				}
			}
			dp[l]=a[i];
		}
	}
	cout<<len<<endl;
	return 0;
}

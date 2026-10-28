#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> arr(n+1,0);
//	vector<int> sum(n+1,0);
//	cin>>arr[1];
//	sum[1]=arr[1];
//	int min=0;
//	int max=sum[1];
//	for(int i=2;i<=n;i++)
//	{
//		cin>>arr[i];
//		sum[i]+=arr[i]+sum[i-1];
//		if(min>sum[i])
//		{
//			min=sum[i];
//		}
//		if(max<sum[i]-min)
//		{
//			max=sum[i]-min;
//		}
//	}
//	cout<<max;
    int sum=0;
    int max=-1e6;
    for(int i=1;i<=n;i++)
    {
    	cin>>arr[i];
    	sum+=arr[i];
    	if(max<sum)
    	{
    		max=sum;
		}
    	if(sum<0)
    	{
    		sum=0;
		}
	}
	cout<<max;
	return 0;
}

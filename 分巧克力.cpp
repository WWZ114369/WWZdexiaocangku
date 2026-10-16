#include<iostream>
using namespace std;
int main()
{
	int N,K;
	cin>>N>>K;
	int arr[100001]={0},arr1[100001]={0};
	long long sum=0; 
	int max=0;
	for(int j=0;j<N;j++)
	{
		cin>>arr[j]>>arr1[j];
		if(arr[j]>arr1[j] && arr[j]>max)
		{
			max=arr[j];
		}
		if(arr1[j]>arr[j] && arr1[j]>max)
		{
			max=arr1[j];
		}
	}
	int a=1;
	while(a<max)
	{
		int mid=a+(max-a+1)/2;
	    for(int i=0;i<N;i++)
	    {
		    sum+=(long long)((arr[i]/mid)*(arr1[i]/mid));
	    }
	    if(sum<K) max=mid-1;
	    else a=mid;
	    sum=0;
    }
    cout<<a;
	return 0;
}

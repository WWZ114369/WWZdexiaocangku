#include<iostream>
using namespace std;
int arr[100001];
int main()
{
	int N,K;
	cin>>N>>K;
	long long cnt[100001]={0},sum=0;
	cnt[0]=1;
	for(int j=1;j<=N;j++)
	{
		cin>>arr[j];
		arr[j]+=arr[j-1];
		sum+=cnt[arr[j]%K];
		cnt[arr[j]%K]++;
	}
	cout<<sum;
	return 0;
}

#include<iostream>
using namespace std;
typedef long long ll;
int temp[101];
int a[101];
ll merge (int l,int r);
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int b;
		cin>>b;
		a[i]=b;
	}
	cout<<merge(0,n);
	return 0;
}
ll merge (int l,int r)
{
	ll sum=0;//每次的sum都靠上一次sum和与上一次合并的sum获取 
	if(r-l<=1)
	{
		return 0;
	}
	int mid=(r+l)/2;
	sum+=merge(l,mid);
	sum+=merge(mid,r);
	int i=l,j=mid,k=l;
	while(i<mid && j<r)
	{
		if(a[i]>a[j])
		{
			temp[k]=a[j];
			k++;
			j++;
			sum+=mid-i;
		}
		if(a[i]<=a[j])
		{
			temp[k]=a[i];
			k++;
			i++;
		}
	}
	while(i<mid)
	{
		temp[k]=a[i];
		k++;
		i++;
	}
	while(j<r)
	{
		temp[k]=a[j];
		k++;
		j++;
	}
	for(int p=l;p<r;p++)
	{
		a[p]=temp[p];
	}
	return sum;
}

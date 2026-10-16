#include<iostream>
using namespace std;
int sum[501];
int main ()
{
	string s;
	cin>>s;
	int a=s.size();
	int arr[501]={0};
	for(int i=0;i<a;i++)
	{
		arr[i]=s[a-1-i]-'0';
    }
    string s1;
    cin>>s1;
	int b=s1.size();
	int arr1[501]={0};
	for(int j=0;j<b;j++)
	{
		arr1[j]=s1[b-1-j]-'0';
    }
    int c=max(a,b);
    for(int k=0;k<max(a,b);k++)
    {
    	sum[k]+=arr[k]+arr1[k];
    	sum[k+1]+=sum[k]/10;
    	sum[k]=sum[k]%10;
	}
	if(sum[c]) c++;
	for(int l=c-1;l>=0;l--)
	{
		cout<<sum[l];
	}
	return 0;
}

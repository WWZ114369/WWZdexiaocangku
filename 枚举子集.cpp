#include<iostream>
#include<vector>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	vector <int> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	vector<vector<int> > s(1<<n,vector<int>(n,0));
	int b=1<<n;
	for(int j=0;j<b;j++)
	{
		for(int k=0;k<n;k++)
		{
			if((j>>k)&1) s[j][k]=arr[k];
		}
	}
	for(int l=0;l<b;l++)
	{
		for(int m=0;m<n;m++)
		{
			if(s[l][m]!=0)
			{
				cout<<s[l][m];
			}
		}
		cout<<endl;
	}
	return 0;
}

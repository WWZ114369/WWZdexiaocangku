#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    vector <long long> res1(n,1);
    vector <long long> res2(n,1);
    long long x=1,y=1;
    for(int i=0;i<n-1;i++)
    {
    	cin>>arr[i];
    	x*=arr[i];
    	res1[i+1]*=x;
	}
	cin>>arr[n-1];
	for(int i=n-1;i>=1;i--)
	{
		y*=arr[i];
		res2[i-1]*=y;
		res1[i-1]*=res2[i-1];
	}
	res1[n-1]*=res2[n-1];
	for(int i=0;i<n;i++)
	{
		cout<<res1[i]<<' ';
	}
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;
const int N=1e5;
vector <int> arr[N];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	for(int i=1;i<=n;i++)
	{
		cout<<i<<"所连接的：";
		int len=arr[i].size();
		for(int j=0;j<len;j++)
		{
			cout<<arr[i][j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}

#include<iostream>
using namespace std;
int main ()
{
	int N;
	cin>>N;
	int x[N],y[N],a[N],b[N];
	for(int i=0;i<N;i++)
		cin>>x[i]>>y[i]>>a[i]>>b[i];
	int c,d;
	cin>>c>>d;
	int e=0;
	for(int j=N-1;j>=0;j--)
	{
		if(c>=x[j] && c<=x[j]+a[j] && d>=y[j] && d<=y[j]+b[j])
		{
			e=j;
			break;
		}
	}
	cout<<e+1;
	return 0;
}


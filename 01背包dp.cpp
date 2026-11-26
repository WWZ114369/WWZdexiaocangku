#include<iostream>
using namespace std;
const int N=1e5+10;
int v[N];
int w[N];
int main()
{
	int n,V;
	cin>>n>>V;
	for(int i=0;i<n;i++)
	{
		cin>>v[i]>>w[i];
	}
	int max=0;
	for(int i=1;i<(1<<n);i++)
	{
		int sum_v=0;
		int sum_w=0;
		int a=0;
		int temp=i;
		bool correct=true;
		while((temp>>a)>0)
		{
			if((temp>>a)&1)
			{
				sum_v+=v[a];
				sum_w+=w[a];
			}
			a++;
			if(sum_v>V)
			{
				correct=false;
				break;
			}
		}
		if(sum_w>max && correct)
		{
			max=sum_w;
		}
	}
	cout<<max;
	return 0;
}

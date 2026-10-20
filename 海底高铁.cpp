#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int N,M;
	cin>>N>>M;
	vector<int> P(M);
	vector<int> A(N,0);
	vector<int> B(N,0);
	vector<int> C(N,0);
	vector<int> diff(N,0);
	cin>>P[0];
	for(int i=1;i<M;i++)
	{
		cin>>P[i];
	}
	for(int i=1;i<N;i++)
	{
		cin>>A[i]>>B[i]>>C[i];
	}
	for(int i=1;i<M;i++)
	{
		if(P[i]-P[i-1]<0)
		{
			diff[P[i]]+=1;
			if(P[i-1]-1<N-1)
			{
				diff[P[i-1]]-=1;
			}
		}
		else
		{
			diff[P[i-1]]+=1;
			if(P[i]-1<N-1)
			{
				diff[P[i]]-=1;
			}
		}
	}
	int t=0;
	long long price=0;
	for(int i=1;i<N;i++)
	{
		t+=diff[i];
		price+=min(t*A[i],C[i]+t*B[i]);
	}
	cout<<price;
	return 0;
}

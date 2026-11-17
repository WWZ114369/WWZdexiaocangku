#include<iostream>
#include<queue>
using namespace std;
int dx[]={1,2,2,1,-1,-2,-2,-1};
int dy[]={2,1,-1,-2,-2,-1,1,2};
int m,n,x,y;

const int N=410;
int a[N][N];

void bfs()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			a[i][j]=-1;
		}
	}
	queue<pair<int,int>> b;
	a[x][y]=0;
	b.push({x,y});
	while(b.size())
	{
		auto t=b.front();
		b.pop();
		int x1=t.first;
		int y1=t.second;
		for(int i=0;i<8;i++)
		{
			int x2=x1+dx[i];
			int y2=y1+dy[i];
			if(x2<1 || x2>m || y2<1 ||y2>n)
			{
				continue;
			}
			if(a[x2][y2]!=-1)
			{
				continue;
			}
			a[x2][y2]=a[x1][y1]+1;
			b.push({x2,y2});
		}
		
	}
	
}

int main()
{
	cin>>n>>m>>x>>y;
	bfs();
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<a[i][j]<<'\t';
		}
		cout<<endl;
	}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	long long L , R;
	cin>>L>>R;
	int a=0; 
	for(int i=L;i<=R;i++)
	{
		int x=i;
		while(x>0)
		{
			if(x%10==2) a++;
			x/=10;
		}
	}
	cout<<a;
	return 0;
}

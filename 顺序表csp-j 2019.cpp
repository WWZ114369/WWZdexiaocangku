#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	vector<int> price(n);
	vector<int> t(n);
	vector<int> ticket_time(n,-1);
	vector<int> ticket_price(n,-1);
	int sum=0;
	int j=0;
	int k=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>price[i]>>t[i];
		if(a[i]==0)
		{
			ticket_time[j]=t[i];
			ticket_price[j]=price[i];
			j++;
			sum+=price[i];
		}
		else if(a[i]==1 && j!=k )
		{
			if(t[i]-ticket_time[k]<=45 && price[i]<=ticket_price[k])
			{
				k++;
			}
			else if(t[i]-ticket_time[k]<=45 && price[i]>ticket_price[k])
			{
				if(k+1==j)
				{
					sum+=price[i];
				}
				else
				{
					int find=0;
					for(int temp=k+1;temp<j;temp++)
					{
						if(ticket_price[temp]>=price[i])
						{
							find=1;
							if(temp==j-1)
							{
								j--;
								break;
							}
							else
							{
								for(int temp1=temp+1;temp1<j;temp1++)
								{
									ticket_price[temp1-1]=ticket_price[temp1];
									ticket_time[temp1-1]=ticket_time[temp1];
								}
								j--;
								break;
							}
						}
					}
					if(!find)
					{
						sum+=price[i];
					}
				}
			}
			else if(t[i]-ticket_time[k]>45)
			{
				k++;
				if(k==j)
				{
					sum+=price[i];
				}
				else
				{
					int find=0;
					for(int temp=k;temp<j;temp++)
					{
						if(t[i]-ticket_time[temp]>45)
						{
							k++;
						}
						else if(t[i]-ticket_time[temp]<=45 && price[i]<=ticket_price[temp])
						{
							find=1;
						    if(temp==j-1)
						    {
						    	j--;
						    	break;
							}
							else
							{
								for(int temp1=temp+1;temp1<j;temp1++)
								{
									ticket_price[temp1-1]=ticket_price[temp1];
									ticket_time[temp1-1]=ticket_time[temp1];
								}
								j--;	
								break;
							}
						}
					}
					if(!find)
					{
						sum+=price[i];
					}
				}
			}
		}
		else if(a[i]==1 && j==k)
		{
			sum+=price[i];
		}
	}
	cout<<sum;
	return 0;
}

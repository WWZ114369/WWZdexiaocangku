#include<iostream>
#include<string>
using namespace std;
const int N=1e5+10;
int trie[N][26];
int pass[N];
int end_[N];

int main()
{
    int n;
    int idx=1;
    int node=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	node=0;
    	pass[node]++;
    	string s;
    	cin>>s;
    	int t=s.size();
    	for(int j=0;j<t;j++)
    	{
    		int path=s[j]-'a';
    		if(trie[node][path]==0)
    		{
    			trie[node][path]=idx;
    			idx++;
			}
			node=trie[node][path];
			pass[node]++;
		}
		end_[node]++;
	}
	string s1;
	cin>>s1;
	int m=s1.size();
	node=0;
	int find=1;
	for(int i=0;i<m;i++)
	{
		if(trie[node][s1[i]-'a']==0)
		{
			cout<<"can't find"<<endl;
			find=0;
			break;
		}
		node=trie[node][s1[i]-'a'];
	}
	if(find && end_[node])
	{
		cout<<end_[node]<<endl;
	}
	if(find && !end_[node])
	{
		cout<<"can't find"<<endl;
	}
    return 0;
}

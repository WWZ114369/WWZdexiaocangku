#include <iostream>
#include <deque>
#include <cstring>
using namespace std;
const int N=1e5;
int main() {
    int n,k;
    cin>>n>>k;
    deque<int> q;
    int arr[N]={0};
    int arr1[N];
    memset(arr1,-1,sizeof(arr1));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    q.push_back(arr[0]);
    int l=0,r=0;
    arr1[l]=0;
    for(int i=1;i<n;i++)
    {
        while(q.size() && arr[i]>=q.back())
        {
            r--;
            q.pop_back();
        }
        q.push_back(arr[i]);
        r++;
        arr1[r]=i;
        if(arr1[l]<=i-k)
        {
            l++;
            q.pop_front();
        }
        if(i>=k-1)
            cout<<arr[arr1[l]]<<' ';
    }
    cout<<endl;
    while(!q.empty())
    {
        q.pop_back();
    }
    q.push_back(arr[0]);
    memset(arr1,-1,sizeof(arr1));
    l=0,r=0;
    arr1[l]=0;
    for(int i=1;i<n;i++)
    {
        while(q.size() && arr[i]<=q.back())
        {
            r--;
            q.pop_back();
        }
        q.push_back(arr[i]);
        r++;
        arr1[r]=i;
        if(arr1[l]<=i-k)
        {
            l++;
            q.pop_front();
        }
        if(i>=k-1)
            cout<<arr[arr1[l]]<<' ';
    }
    return 0;
}

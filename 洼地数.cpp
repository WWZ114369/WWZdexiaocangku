//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int N,a=0,b=0,sum=0;
//	cin>>N;
//	vector<int> arr(N);
//	for(int i=0;i<N;i++)
//	{
//		cin>>arr[i];
//	}
//	for(int j=0;j<N-1;j++)
//	{
//		if(arr[j+1]<arr[j])
//		{
//			a=arr[j];
//			b=1;
//		}
//		if(arr[j+1]>arr[j] && arr[j+1]>=a && b==1)
//		{
//			sum++;
//			b=0;
//		}
//	}
//	cout<<sum;
//	return 0;
//}
//第二版 
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//    int N, sum = 0;
//    cin >> N;
//    vector<int> arr(N);
//    
//    for(int i = 0; i < N; i++)
//        cin >> arr[i];
//    
//    // 找极小值点（不包括边界）
//    for(int i = 1; i < N-1; i++)
//    {
//        // 是极小值：比左右都小或等于
//        if(arr[i] <= arr[i-1] && arr[i] <= arr[i+1])
//        {
//            // 检查左右是否有比它高的
//            bool leftHigh = false, rightHigh = false;
//            
//            // 向左找第一个比它高的
//            for(int l = i-1; l >= 0; l--)
//            {
//                if(arr[l] > arr[i])
//                {
//                    leftHigh = true;
//                    break;
//                }
//                if(arr[l] < arr[i]) break;  // 遇到更低的，停止
//            }
//            
//            // 向右找第一个比它高的
//            for(int r = i+1; r < N; r++)
//            {
//                if(arr[r] > arr[i])
//                {
//                    rightHigh = true;
//                    break;
//                }
//                if(arr[r] < arr[i]) break;  // 遇到更低的，停止
//            }
//            
//            if(leftHigh && rightHigh)
//                sum++;
//        }
//    }
//    
//    cout << sum;
//    return 0;
//}
#include<iostream>
using namespace std;
int main ()
{
	int a=0,b,l=0;
	int n,ans=0;
	cin>>n;
    for(int z=1;z<=n;z++)
    {
        cin >>b;
        if(b<a) {l=1;}
        if(b>a&&l==1) {ans++;l=0;}
        a=b;
    }
    cout<<ans;
    return 0;
}

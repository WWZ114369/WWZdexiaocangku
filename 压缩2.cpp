//#include<iostream>
//#include<cstring>
//using namespace std;
//int main()
//{
//	int c=0;
//	char arr[201];
//	int arr1[40000];
//	int f=0;
//	cin>>arr;
//	int a=strlen(arr);
//	int b=1;
//	for(int i=0;i<a-1;i++)
//	{
//		
//		    if(arr[i]!=arr[i+1])
//		    {
//			    arr1[f]=b;
//			    b=1;
//			    f++;
//		    }
//		    else
//	  	    {
//			    b++;
//		    }
//	}
//	char e=arr[a-1];
//	for(int j=1;j<a;j++)
//	{
//		char s[201];
//		cin>>s;
//		int d=strlen(s);
//		if(e!=s[0])
//		{
//			arr1[f]=b;
//			b=1;
//			f++;
//		}
//		else b++;
//		for(int k=0;k<d-1;k++)
//		{
//			if(s[k]!=s[k+1])
//		    {
//			    arr1[f]=b;
//			    b=1;
//			    f++;
//		    }
//		    else
//	  	    {
//			    b++;
//		    }
//		}
//		e=s[d-1];
//	}
//	arr1[f]=b;
//	f++;
//	cout<<a<<' ';
//	for(int l=0;l<f;l++)
//	{
//		cout<<arr1[l]<<' ';
//	}
//    return 0;
//}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> grid;
    string line;
    
    // 读取所有行
    while (cin >> line) {
        grid.push_back(line);
    }
    
    int N = grid.size();  // N×N 点阵
    
    // 把所有字符拼接成一个连续字符串
    string all;
    for (int i = 0; i < N; i++) {
        all += grid[i];
    }
    
    // 游程编码
    vector<int> result;
    result.push_back(N);  // 第一个数是 N
    
    int count = 1;
    for (int i = 0; i < all.size() - 1; i++) {
        if (all[i] != all[i + 1]) {
            result.push_back(count);
            count = 1;
        } else {
            count++;
        }
    }
    result.push_back(count);  // 最后一段
    
    // 输出
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) cout << " ";
    }
    
    return 0;
}

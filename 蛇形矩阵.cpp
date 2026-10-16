#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 1;
    int arr[9][9] = {0};
    int dx[] = { 0 ,1,0,-1};
    int dy[] = { 1 ,0,-1,0};
    int x = 0;
    int y = 0;
    int b = 0;
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
            arr[x][y] = a;
            a++;
            x += dx[b];
            y += dy[b];
            if (x > n - 1 || y > n - 1 || x<0 || y<0 ||arr[x][y]!=0)
            {
                x -= dx[b];
                y -= dy[b];
                b=(b+1)%4; 
                x += dx[b];
                y += dy[b];
            }
        }
    }
    for (int k = 0;k < n;k++)
    {
        for (int l = 0;l < n;l++)
        {
            cout << arr[k][l];
        }
    }
    return 0;
}

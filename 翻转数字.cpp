#include <iostream>
using namespace std;

int main() {
    long long N;
	cin>>N; 
	long long sum=0;
	if(N>0)
	{
        while (N > 0) 
		{
            int a = N % 10;      
            sum = sum * 10 + a;  
            N /= 10;             
        }
    }
    else
    {
        while (N < 0) 
		{
            int a = N % 10;      
            sum = sum * 10 + a;  
            N /= 10;             
        }
	}
    cout << sum << endl;
    return 0;
}


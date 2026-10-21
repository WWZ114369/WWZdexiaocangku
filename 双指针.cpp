#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	unordered_map <int, int> my_map;
	int left = 0, right = 0;
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	int len = 0;
	while (left < n && right < n)
	{
		my_map[arr[right]]++;
		while (my_map[arr[right]] > 1)
		{
			my_map[arr[left]]--;
			left++;
		}
		right++;
		len = max(len, right - left);
	}
	cout << len;
	return 0;
}

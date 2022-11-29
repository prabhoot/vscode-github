#include<iostream>
using namespace std;
int interpolation_Search(int arr[], int n, int x)
{
	int low = 0, high = (n - 1);
	while (low <= high && x >= arr[low] && x <= arr[high])
	{
		if (low == high)
		{
			if (arr[low] == x) return low;
			return -1;
		}
		int pos = low + (((double)(high - low) /(arr[high] - arr[low])) * (x - arr[low]));
		if (arr[pos] == x)
			return pos;
		if (arr[pos] < x)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return -1;
}
int main()
{
	int a[] = {1,2,4,5,6,7,8,9,13,16,18,29,33,53,74};
	int n = sizeof(a)/sizeof(a[0]);
	int search_key{29};
	int index = interpolation_Search(a, n, search_key);
	if (index != -1)
		cout << "search key found at index " << index<<endl;
	else
		cout << "search key not found";
	return 0;
}

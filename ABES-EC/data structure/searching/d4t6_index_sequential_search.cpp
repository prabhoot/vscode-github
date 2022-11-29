#include<iostream>
using namespace std;
void indexedSequentialSearch(int a[], int n, int k)
{
	int gp = 3;
	int dat[gp], i{}, in_range= 0;
	int j = 0,flag{}, start, end;
	for (i = 0; i < n; i += 3) {
		dat[j] = i;
		j++;
	}
	if (k < a[0]) {
		cout<<"Not found"<<end;
		exit(0);
	}
   
	else {
		for (i = 1; i <= j; i++)
			if (k <= a[dat[i]]) {
				start = dat[i - 1];
				end = dat[i];
				in_range = 1;
				break;
			}
	}
	if (in_range == 0) {
		start = dat[gp - 1];
		end = gp;
	}
	for (i = start; i <= end; i++) {
		if (k == a[i]) {
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		cout<<"Found at index "<<i;
	else
		cout<<"Not found";
}


int  main()
{

	int a[] = { 1,3,17,19,22,26,29,46};
	int n = sizeof(a) / sizeof(a[0]);
	int search_key = 29;
	indexedSequentialSearch(a, n, search_key);
    return 0;
}

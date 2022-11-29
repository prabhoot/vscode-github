#include <iostream>
using namespace std;
#define n 3
void transpose_mat(int A[][n], int B[][n])
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++){
            B[i][j] = A[j][i];
            cout << " " << B[i][j];}
	cout <<endl;
}
int main()
{
	int A[n][n] = { { 1, 1, 1},{ 2, 2, 2},{ 3, 3, 3}};
	int B[n][n],i{},j{};
	transpose_mat(A, B);
	cout << "Result matrix is "<<endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			cout << " " << B[i][j];
		cout <<endl;
	}
	return 0;
}

#include <iostream>
using namespace std;
#define n 3
void transpose_mat(int a[][n])
{
	int b[n][n];
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++){
            b[i][j] = a[j][i];}
			for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		a[i][j]=b[i][j];
	}
}
	
}
void interchange_col(int a[][n]){
	int b[n][n];
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
        b[i][j]=a[i][n-j-1];
		}}

for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		a[i][j]=b[i][j];
	}
}}
void interchange_rows(int a[][n]){
    	int b[n][n];
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
        b[i][j]=a[n-i-1][j];}}

for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		a[i][j]=b[i][j];
	}
}
}
int main(){
	int A[n][n] = { { 1,2,3},{4,5,6},{7,8,9}};
	transpose_mat(A);
	interchange_rows(A);
    // interchange_col(B,A);
	cout << "Result matrix is "<<endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << " " << A[i][j];
		cout <<endl;
	}
	return 0;

}

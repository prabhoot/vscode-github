// Program for Vector Representation of General Sparse Matrix
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int mat[5][5] = {{1, 0, 2, 0, 0},
                 {0, 3, 0, 0, 2},
                 {0, 5, 3, 0, 0},
                 {0, 0, 5, 0, 0},
                 {7, 0, 0, 0, 0}};
    struct sparse{
        int row;
        int column;
        int data;
    };
    vector<struct sparse>v;
    struct sparse s[8];
    int count=-1;
    for (int i{}; i < 5; i++) {
    for (int j{}; j < 5; j++) {
        int n=mat[i][j];
        if(n!=0){
            count++;
            s[count].row=i;
            s[count].column=j;
            s[count].data=n;
            v.push_back(s[count]);
        }
      }
    }
    for(auto i:v){
        cout<<i.data<<" ";
    }
  return 0;
}
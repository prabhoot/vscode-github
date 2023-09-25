#include <iostream>
#include <vector>
using namespace std;
// int binary_search(int arr[], int n, int key) {
//     int low = 0;
//     int high = n - 1;
//     int mid = 0;
//     while (low < high) {
//         mid = (low + high) / 2;
//         if (arr[mid] == key) {
//             return mid;
//         }
//         if (arr[mid] < key) {
//             low = mid + 1;

//         } else {
//             high = mid - 1;
//         }
//     }
//     return -1;
// }
// int main() {
//     int arr[5] = {1, 2, 4, 5, 6};
//     int key = 4;
//     cout << binary_search(arr, 5, key)<<endl;
//     return 0;
// }

int countNegatives(vector<vector<int>>& v) {
    int j = 0;
    int count = 0;
    for (int i = v.size() - 1; i >= 0 || (j == v[i].size()-1); i--) {
        if (v[i][j] < 0) {
            count += v.size() - j;
        } else {
            while (j < v[i].size()-1) {
                j++;
                if (v[i][j] < 0) {
                    count += (v.size() - j);
                    break;
                }
            }
        }
    }
    return count;
}
int main() {
    vector<vector<int>> v =
        {{4, 3, 2, -1},
         {3, 2, 1, -1},
         {1, 1, -1, -2},
         {-1, -1, -2, -3}};
    cout << countNegatives(v) << endl;
}
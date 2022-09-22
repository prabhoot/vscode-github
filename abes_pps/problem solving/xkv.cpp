#include <iostream>
using namespace std;
int linear_search(int arr[], int N, int x,int low,int high)
{
    int i=low;
    for (; i < N; i++)
        if (arr[i] == x){
          cout<<x<<" found at index " <<i;
          return i;
        }
      cout<<"not found";
    return -1;
}

int main(){
   int n{5};
   int jump{3};
   //cin>>jump;
//   cin>>n;
  int a[n]{1,5,7,8,9};
// for(int i{};i<n;i++){
//  cin>>a[i];
// }

    int index[n];
    for(int i{};i<n;i++){
        if((jump+i)>(n-1)){
            index[i]=n-1;
         break;
        }
        index[i]=jump*i;
    }
    for(int i=0;i<n;i++){
        cout<<index[i];
    }
    int high{n-1};
    int low{0};
    int search_key{};
    cin>>search_key;
for(int i=0;i<n;i++){
    if(a[index[i]]==search_key){
        cout<<a[index[i]];
        break;
    }
    else if(a[index[i]]>search_key){
        high=index[i]-1;
        low=index[i-1];
    }
    else{
        continue;
    }
}


    return 0;
}
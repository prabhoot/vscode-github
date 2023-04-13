// vector basics
//  #include <functional>
//  #include <iostream>
//  #include <iterator>
//  #include <vector>
//  #include <numeric>
//  using namespace std;
//  void display_vector(vector<int>v){
//    for(int i=0;i<v.size();i++){
//      cout<<v[i]<<" ";
//    }
//  }
//  void err(vector<int>&v){
//    int n=v.size();
//    for(int i=0;i<n;i++){
//      v[i]+=1;
//    }
//    cout<<endl;
//    display_vector(v);
//  }
//  void cumm_sum(vector<int>v,int x){
//    if(v.empty()==1){
//      v.push_back(x);
//    }
//    else {
//    v.push_back(v.back()+x);
//    }
//  }
//  int main() {
//    vector<int> v={1,2,3};
//  vector<int >sum;
//  //   cout<<"enter the size:";
//  //  int size;
//  //  cin>>size;
//  //  for(int i=0;i<size;i++){
//  //   cout<<"enter the elements";
//  //   int x;
//  //   cin>>x;
//  //   v.push_back(x);
//  //  }
//   display_vector(v);
//   err(v);
//   cout<<endl;
//   cout<<v.back();
//   cout<<endl;
//   display_vector(v);
//   cout<<endl;

// v.pop_back();
//  display_vector(v);
//  cout<<endl;
//   // for(int i=0;i<v.size();i++){
//   //   partial_sum()
//   // }
//   // std::partial_sum(v.begin(),v.end(),sum.begin(),plus<double>());
//   cout<<accumulate(v.begin(),v.end(),0);
//   return 0;
// }
#include <iostream>
#include <vector>
using namespace std;
int main() {

  // vector<int> v(5);
  // cout << "capacity " << v.capacity() << endl;
  // cout << "size " << v.size() << endl;
  // v.push_back(10);
  // cout << "capacity " << v.capacity() << endl;
  // cout << "size " << v.size() << endl;

  vector<int> v[5];
  v[0].push_back(1);
  v[0].push_back(2);
  v[0].push_back(3);
  v[1].push_back(4);
  v[1].push_back(5);
  v[2].push_back(6);
  v[2].push_back(7);
  v[2].push_back(8);
  v[2].push_back(9);
  v[3].push_back(10);
  v[3].push_back(11);
  v[3].push_back(12);
  v[4].push_back(-1);
  v[4].push_back(-2);
  v[4].push_back(-3);
  v[4].push_back(-4);
  v[4].push_back(-5);
  for (int i = 0; i < 5; i++) {
    cout <<i << ": ";
    for (int j = 0; j < v[i].size(); j++) {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }
cout<<endl;
for(auto i:v){
  for(auto j:i){
    cout<<j<<" ";  }
    cout<<endl;
}
  return 0;
}
// if u have a vector of pairs and u want to sort them on the basic of first or the second value of the pair .
// just call for a sort(v.begin(),v.end(),function).
// the third parameter is a user defined function.
// function(pair<int, int> p1, pair<int, int> p2){
// return p1.first<p2.first;}
// this is on the basics of first_element;
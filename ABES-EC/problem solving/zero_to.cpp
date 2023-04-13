#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;
int fuction(){
  int n=12;
  queue<int>q;
  int moves[1000001]={0};
  q.push(n);
  while (!q.empty()) {
  int x=q.front();q.pop();
  // case 1;
  if(x==0){
    break;
  }
  // case 2;
  if(moves[x-1]==0){
    q.push(x-1);
    moves[x-1]=moves[x]+1;
  }
  // case 3;
  for(int i=2;i*i<=x;i++){
    int y=max(i,x/i);
    if(x%i==0&&moves[y]==0){
      q.push(y);
      moves[y]=moves[x]+1;
    }
  }
  }  
  return moves[0];
}
int main(){


  return 0;
}
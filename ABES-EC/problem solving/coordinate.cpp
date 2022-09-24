#include <iostream>
using namespace std;
int main(){
    int x{};
    int y{};
    cin>>x>>y;
    if (x==0&&y==0) {
    cout<<"at origin";
    }
     if(x==0 && y!=0){
        cout<<"at y axis";
        }
    if (y==0&&x!=0){
             cout<<"at x axis";
    }
    if(x>0&&y>0){
        cout<<"1st quadrant";
    }
    if (x<0&&y>0) {
        cout<<"2st quadrant";
    }
    if (x<0&&y<0) {
        cout<<"3rd quadrant";
    }
    if (x>0&&y<0) {
        cout<<"4th quadrant";
    }
    return 0;
}
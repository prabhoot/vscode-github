#include <iostream>
using namespace std;
int main(){
int apple = 1;
int orange = 2;
apple = orange+apple;
orange = apple-orange;
apple = apple-orange;
cout<<apple<<endl<<orange;
return 0;
} 
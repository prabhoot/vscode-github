#include <iostream> 
#include <cmath>
#include <math.h>
using namespace std;
int main(){
  int round_off_to_nearest_integer=floor (4.3);
  int power =pow(2, 3);
  cout <<round_off_to_nearest_integer<<endl<<power<<endl;

  //practice
  const double pi=3.14;
  double radius;
  cin >> radius;
  double area =pi*pow(radius,2);
  cout << area;

  return 0;
}
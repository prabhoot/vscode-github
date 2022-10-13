#include <iostream>
using namespace std;
struct time{
    int hour;
    int min;
    int sec;
};
void extracted(struct time t1, struct time t2, struct time t) {
  t.sec = (t1.sec + t2.sec) % 60;
  int x = (t1.sec + t2.sec) / 60;
  t.min = ((t1.min + t2.min) + x) % 60;
  int y = ((t1.min + t2.min) + x) / 60;
  t.hour = ((t1.hour + t2.hour) + y);
    cout << t.hour << " hrs " << t.min << " min " << t.sec << " sec ";
}
int main() {
  struct time t1 {
    7, 31, 54
  };
  struct time t2 {
    2, 55, 36
  };
  struct time t;
  extracted(t1, t2, t);

  return 0;
}
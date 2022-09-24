#include <bits/stdc++.h>
using namespace std;
 
int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3,
                       5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y / 4 - y / 100 +
             y / 400 + t[m - 1] + d) % 7;
}
 
// Driver Code
int main()
{
      int day_{1};
     int month{1};
     int year{1};
    cin>>day_>>month>>year;
    int day = dayofweek(day_, month, year);
    cout << day;
 
    return 0;
}
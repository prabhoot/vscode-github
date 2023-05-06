#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s, x;
    int operation;
    int n;
    stack<string> st;
    cin >> n;
    while (n--)
    {
        cin >> operation;
        int k{};
        switch (operation)
        {
        case 1:
            cin >> x;
            s = s.append(x);
            st.push(s);
            break;
        case 2:
            cin >> k;
            if (k > s.size())
            {
                s = "";
            }
            else
            {
                k = s.size() - k;
                s = s.substr(0, k);
                st.push(s);
            }
            break;
        case 3:
            cin >> k;
            cout << s[k - 1] << endl;
            break;
        case 4:
            if (!st.empty())
            {
                st.pop();
                s = st.top();
            }
        default:
            break;
        }
    }
    return 0;
}

// 8
// 1 abc
// 3 3
// 2 3
// 1 xy
// 3 2
// 4
// 4
// 3 1

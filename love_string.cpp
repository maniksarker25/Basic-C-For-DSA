#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s, t;
        cin >> s >> t;

        int max_len = max(s.length(), t.length());

        for (int i = 0; i < max_len; i++)
        {
            if (i < s.length()) // Check if 'i' is within the bounds of 's'
            {
                cout << s[i];
            }
            if (i < t.length()) // Check if 'i' is within the bounds of 't'
            {
                cout << t[i];
            }
        }

        cout << endl;
    }

    return 0;
}

// lucky

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int first_three_cout = 0;
        int last_three_cout = 0;

        for (int i = 0; i < 3; i++)
        {
            first_three_cout += s[i] - '0';
        }

        for (int i = 5; i > 2; i--)
        {
            last_three_cout += s[i] - '0';
        }

        if (first_three_cout == last_three_cout)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

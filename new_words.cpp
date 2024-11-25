//  new words

/*
Given a string S
. Print number of times that "EGYPT" word can be formed from S
's characters.

Note: Case of the letters doesn't matter. For example: "Egypt", "egypt" and "eGyPt" are the same.

Input
Only one line contains a string S(1≤|S|≤106)
 where |S| is the length of the string and it consists of lowercase and uppercase English letters.

Output
Print the answer required above.

intput :
EgYpTaz
output: 1
input:pemigdbeigyypetet
output:2
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int e_cout = 0;
    int g_cout = 0;
    int y_cout = 0;
    int p_cout = 0;
    int t_cout = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'E' || s[i] == 'e')
        {
            e_cout++;
        }
        else if (s[i] == 'G' || s[i] == 'g')
        {
            g_cout++;
        }
        else if (s[i] == 'Y' || s[i] == 'y')
        {
            y_cout++;
        }
        else if (s[i] == 'P' || s[i] == 'p')
        {
            p_cout++;
        }
        else if (s[i] == 'T' || s[i] == 't')
        {
            t_cout++;
        }
    }

    int min_cout = min({e_cout, g_cout, y_cout, p_cout, t_cout});

    cout << min_cout;

    return 0;
}
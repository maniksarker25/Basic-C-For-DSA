//

/*
In an ICPC contest, balloons are distributed as follows:

Whenever a team solves a problem, that team gets a balloon.
The first team to solve a problem gets an additional balloon.
A contest has 26 problems, labelled A
, B
, C
, ..., Z
. You are given the order of solved problems in the contest, denoted as a string s
, where the i
-th character indicates that the problem si
 has been solved by some team. No team will solve the same problem twice.
Determine the total number of balloons that the teams received. Note that some problems may be solved by none of the teams.

Input
The first line of the input contains an integer t
 (1≤t≤100
) — the number of testcases.

The first line of each test case contains an integer n
 (1≤n≤50
) — the length of the string.

The second line of each test case contains a string s
 of length n
 consisting of uppercase English letters, denoting the order of solved problems.

Output
For each test case, output a single integer — the total number of balloons that the teams received.



 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        // freq array for handle solved
        int solved[26] = {0};
        int totalBalloons = 0;

        for (int i = 0; i < n; i++)
        {
            int problemIndex = s[i] - 'A';

            if (solved[problemIndex] == 0)
            {
                totalBalloons += 2;
                solved[problemIndex] = 1;
            }
            else
            {
                totalBalloons += 1;
            }
        }
        cout << totalBalloons << endl;
    }

    return 0;
}
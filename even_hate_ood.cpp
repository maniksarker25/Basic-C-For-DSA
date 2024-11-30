/*
You are given an array a
 of n
 integers. You have two kinds of operations

increment any element in a
 (increase it by one).
decrement any element in a
 (decrease it by one).
What is the minimum number of operations to make the number of even elements equal to the number of odd elements, or detect that this is impossible?

Input
The first line contains a single integer t(1≤t≤10)
 the number of test cases.

The first line of each test case contains an integer n(1≤n≤105)
 the number of elements in the array a
 .

The second line of each test case contains n
 integers ai(1≤ai≤105)
 the elements of the array a
.

Output
For each test case, print the minimum number of operations required, or −1
 if it's impossible

 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int even_cout = 0;
        int odd_count = 0;
        for (int i = 0; i < n; i++)
        {
            a[i] % 2 == 0 ? even_cout++ : odd_count++;
        }

        if (n % 2 != 0)
        {
            cout << "-1";
        }
        else if (even_cout == odd_count)
        {
            cout << "0";
        }
        else
        {
            cout << abs(even_cout - odd_count) / 2;
        }

        cout << endl;
    }

    return 0;
}
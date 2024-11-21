#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int is_palindrome = 1;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (a[i] != a[j])
        {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}

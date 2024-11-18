// dynamic array ---------

#include <bits/stdc++.h>

using namespace std;

int main()
{

    // static array declare

    // int a[5];

    // dynamic array declare
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
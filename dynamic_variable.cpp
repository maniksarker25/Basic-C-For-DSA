// dynamic variable ----------

#include <bits/stdc++.h>

using namespace std;

int main()
{

    // static variable
    int x = 20;
    // dynamic varible => here use pointer for store the address
    int *p = new int;

    *p = 100;

    cout << *p << endl
         << x << endl;

    return 0;
}
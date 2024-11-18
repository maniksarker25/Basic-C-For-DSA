// #include <iostream>
// #include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c;

    cin >> a >> b >> c;

    // usign fuction -- min , max , swap

    // print min
    cout << min(a, b) << endl;

    // print max---- need to use {} this when compare more then 2 number
    cout << max({a, b, c}) << endl;

    // swap using buil in function

    swap(a, b);

    cout << a << endl
         << b << endl;
    return 0;
}
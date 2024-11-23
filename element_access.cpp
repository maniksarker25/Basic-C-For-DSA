// learn string element access

#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin >> s;
    // access element
    cout << s[0] << endl;

    // same array [] access
    cout << s.at(1) << endl;

    // print last character
    cout <<s.back() << endl;

    // print first character
    cout <<s.front() << endl;

    return 0;
}
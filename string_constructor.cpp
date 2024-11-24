// string constructor

#include <bits/stdc++.h>

using namespace std;

int main()
{
    //   string s = "Hello";

    // constructor way 1
    // string s("Hello");

    // 2 way
    // string s("Hello", 3); // it return Hel because length define 3

    // 3rd way
    string s = "Hello World";
    // string t(s);
    // cout <<t <<endl; it return Hello World a

    // string t(s,4);
    // cout <<t <<endl; // it print o world this cut first 4 character

    // 4th way
    // string s(5,'A'); // it print AAAAA

    cout << s << endl;

    return 0;
}
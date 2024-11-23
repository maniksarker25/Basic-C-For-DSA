// learn about string modifier

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "Hello World";
    string s2 = " Hi";
    // s += s2;
    // s.append(s2);      // both are same
    cout << s << endl; // Hello World Hi

    // add a character to end
    s.push_back('M');
    // remove last character
    s.pop_back();

    cout << s << endl;

    return 0;
}
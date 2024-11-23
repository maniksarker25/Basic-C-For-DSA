// learn string iterators

#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s = "Hello";

    // bigin iterator point the first element it's a pointer

    // cout << *s.begin() << endl; // dereferencing because it's a pointer
    // end iterator point the last index + 1
    // cout << *s.end() << endl; // it print null
    // cout << *(s.end() -1) <<endl; print last character

    // print all character for array with iterator

    for (string::iterator it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }
    {
    }

    return 0;
}
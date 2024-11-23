// learn about string capacity

#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s = "hello world";

    cout << "size=>" << s.size() << endl;
    // max size that string can hold
    cout << "max size=>" << s.max_size() << endl;

    // return current available capacity
    cout << "capacity=>" << s.capacity() << endl;

    // cout << s << endl;
    // clear string
    // s.clear();
    // cout << s << endl;

    cout << "is empty=>" << s.empty() << endl;

    // resize string

    // s.resize(4); /// return hell
    s.resize(15, 'x'); // return hello worldxxxx
    cout << "resize string=>" << s << endl;

    return 0;
}
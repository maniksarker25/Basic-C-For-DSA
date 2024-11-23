// learn about string modifier

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "Hello World";
    string s2 = " Hi";
    // s += s2;
    // s.append(s2);      // both are same
    // cout << s << endl; // Hello World Hi

    // add a character to end
    // s.push_back('M');
    // remove last character
    // s.pop_back();

    // use =

    // s = "Gello World";
    // s.assign("Gello"); // same as ==

    // s.erase(5); // start delete from 5 index
    // s.erase(5, 2); // start with 5 and delete 2 character

    // s.replace(6, 5, "Bangladesh"); // kothai replace korbo , okana thaka koita index delete korbo , ki bosata chai

    // insert a portion to a specific position
    s.insert(5, " Bangladesh"); // output : Hello Bangladesh World

    cout << s << endl;

    return 0;
}
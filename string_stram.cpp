// stirng stream

#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    getline(cin, s);

    cout << s << endl;

    stringstream ss(s); // cutting with world by world and store
    string world;
    // ss >> world;
    // cout << world << endl; // get world from stringstream by this sign >>
    // ss >> world;
    // cout << world << endl;
    // ss >> world;
    // cout << world << endl;
    // ss >> world;
    // cout << world << endl;
    // ss >> world;
    // cout << world << endl;

    // using loop
    while (ss >> world)
    {
        cout << world << endl;
    }

    return 0;
}
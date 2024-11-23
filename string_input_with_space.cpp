// sting input with space

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int x;
    cin >> x;
    // cin >> s;
    // input space string
    cin.ignore();
    getline(cin,s);
    cout << x << endl<< s << endl;

    return 0;
}
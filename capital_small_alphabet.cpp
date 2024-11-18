#include <bits/stdc++.h>

using namespace std;

int main()
{
    char x;
    cin >> x;
    if (x >= '0' && x <= '9')
    {
        cout << "IS DIGIT" << endl;
    }

    if (x >= 'A' && x <= 'z')
    {
        cout << "ALPHA" << endl;
        x >= 'A' && x <= 'Z' ? cout << "IS CAPITAL" : cout << "IS SMALL" << endl;
    }
    return 0;
}
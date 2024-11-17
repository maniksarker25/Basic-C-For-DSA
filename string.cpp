// learn string variable
#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    // use this for ingore the enter in input because cin.getline take the enter as a input after that not take the input bellow line
    cin.ignore();
    char s[100];
    // input string  with space
    cin.getline(s, 100);
    cout << x << endl
         << s <<endl;

    // by using string variable

    string name;

    cin >> name;
    cout << name;

    return 0;
}
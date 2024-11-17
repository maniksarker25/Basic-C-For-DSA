#include <iostream>
// use std
using namespace std;
int main()
{
    int x;
    char c;
    double d;
    // type maunally
    // std:: cin >> x;
    // std:: cout << x << std::endl;

    cin >> x >> c >> d;
    cout << x << " " << c << endl
         << d << endl;

    // print ascii value
    char ch = 'a';
    int ascii_value = ch;

    cout << ascii_value << endl;

    // print ascci value using type casting

    char chr = 'b';

    cout << (int)chr;

    return 0;
}
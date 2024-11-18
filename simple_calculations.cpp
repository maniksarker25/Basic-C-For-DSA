#include <iostream>
using namespace std;

int main()
{

    int X, Y;

    cin >> X >> Y;

    int summation = X + Y;
    long long multiplication = (long long)X * Y;

    int subtraction = X - Y;
    cout << X << " + " << Y << " = " << summation << endl;
    cout << X << " * " << Y << " = " << multiplication << endl;
    cout << X << " - " << Y << " = " << subtraction << endl;

    return 0;
}

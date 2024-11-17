#include <iostream>

using namespace std;

int main()
{

    int x;
    cin >> x;

    switch (x % 2)
    {
    case 0:
        cout << "This is even number";
        break;
    default:
        cout << "This is odd number" ;
        break;
    }

    return 0;
}
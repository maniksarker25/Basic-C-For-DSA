// set precision ------

#include <iostream>
// include for set precision 
#include<iomanip>
using namespace std;

int main()
{

    double d = 45.3534345;
    // cout << d << endl; // here print 4 number after dosomik 
    // print 2 digit after dosomik
    cout << fixed << setprecision(2) << d << endl;

    // print 3 digit 
    cout << fixed << setprecision(3) << d << endl;

    // print 5 digit 
    cout << fixed << setprecision(5) << d << endl;
    return 0;
}
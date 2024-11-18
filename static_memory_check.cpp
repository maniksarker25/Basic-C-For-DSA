// check stack +> static memory behovior
// when we use static memory , use static variable , arry then after return the funciton in main funciton the fun function will deleted
#include <bits/stdc++.h>

using namespace std;

int *p;

void fun()
{
    int x = 10;
    p = &x;
    // print 10
    cout << "Fun => " << *p << endl;
    return;
}

int main()
{
    fun();
    // print 0 or in linux print address
    cout << "Main => " << *p << endl;
    return 0;
}
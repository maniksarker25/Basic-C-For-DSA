// check heap +> dynamic memory behovior
// when we use dynamic memory , use dynamic variable , arry then after return the funciton in main funciton the fun function not  deleted
#include <bits/stdc++.h>

using namespace std;

int *p;

void fun()
{
    int *x = new int;
    *x = 10;
    p = x;
    // print 10
    cout << "Fun => " << *p << endl;
    return;
}

int main()
{
    fun();
    // print 10
    cout << "Main => " << *p << endl;
    return 0;
}
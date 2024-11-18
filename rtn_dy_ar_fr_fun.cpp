// return dynamic array from function

#include <bits/stdc++.h>

using namespace std;

int *fun()
{
    // declare static array
    // int a[5];

    //declare dynamic array
    int *a = new int[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
}

int main()
{

    int *x = fun();
    // if i use static array give me error because i try to print the array but that print in static array so that after return function the array is deleted
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << x[i];
    // }

    // if i use dynamic array then it print perfectly
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";
    }

    return 0;
}
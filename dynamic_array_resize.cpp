// dynamic array resize

#include <bits/stdc++.h>

using namespace std;

// resize without dynamic array--------------------

// int main()
// {

//     int a[3];
//     for (int i = 0; i < 3; i++)
//     {
//         cin >> a[i];
//     }

//     // resize

//     int b[5];

//     for (int i = 0; i < 3; i++)
//     {
//         b[i] = a[i];
//     }
//     b[3] = 30;
//     b[4] = 100;
//     //! so here we create a new array so the previous array make space in memory for unless-----------
// we can not delete the a array because it is static array
//     for (int i = 0; i < 5; i++)
//     {
//         cout << b[i] << " ";
//     }

//     return 0;
// }

// by using dynamic array---------------------------

int main()
{

    int *a = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    // resize

    int *b = new int[5];

    for (int i = 0; i < 3; i++)
    {
        b[i] = a[i];
    }
    b[3] = 30;
    b[4] = 1000;

    // new we can delete the a array

    delete[] a;
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}
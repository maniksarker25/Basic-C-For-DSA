#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // sort(staringPoint,endingPoint);
    // a = first index
    // a + n => last index + 1
    sort(a, a + n); // ascending
    // sort(a+2,a+4);

    // descending
    // sort(a, a + n, greater<int>());

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
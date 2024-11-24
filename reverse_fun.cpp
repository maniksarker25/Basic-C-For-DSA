// reverse function

#include <bits/stdc++.h>

using namespace std;

int main()
{

    // number array reverse
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // reverse(starting,ending);
    reverse(a, a + n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }

    cout << endl;
    // string reverse
    string s = "hello";

    reverse(s.begin(), s.end());

    cout << s << endl;

    return 0;
}
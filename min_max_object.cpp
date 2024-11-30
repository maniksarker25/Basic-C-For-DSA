// min max object

#include <bits/stdc++.h>

using namespace std;

class Student
{

public:
    string name;
    int roll;
    int marks;
};

int main()
{

    int n;
    cin >> n;

    // decare array of object
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
    }

    // find the minimum
    // int mn = INT_MAX;
    // declare min object
    Student mn;
    mn.marks = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // mn = min(a[i].marks, mn);
        if (a[i].marks < mn.marks)
        {
            mn = a[i];
        }
    }

    // print minimum object
    cout << mn.name << " " << mn.roll << " " << mn.marks << endl;

    return 0;
}
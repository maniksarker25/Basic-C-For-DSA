// sort array of object

#include <bits/stdc++.h>

using namespace std;

class Student
{

public:
    string name;
    int roll;
    int marks;
};

// compare function for sort
bool cmp(Student l, Student r)
{
    if (l.marks < r.marks)
    {
        return true;
    }

    else
    {
        return false;
    }
}

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

    // sort the array of object
    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}
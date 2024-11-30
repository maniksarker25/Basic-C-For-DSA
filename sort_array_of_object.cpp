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
    // if (l.marks < r.marks)
    // {
    //     return true;
    // }

    // else
    // {
    //     return false;
    // }
    // sort cut
    // ascending order
    // return l.marks < r.marks;
    // desending order
    // return l.marks > r.marks;
    // if mark is same sort based on roll for those object
    // if (l.marks > r.marks)
    // {
    //     return true;
    // }
    // else if (l.marks < r.marks)
    // {
    //     return false;
    // }
    // // when 2 object mark is same , then sort by roll
    // else
    // {
    //     // if (l.roll < r.roll)
    //     // {
    //     //     return true;
    //     // }
    //     // else
    //     // {
    //     //     return false;
    //     // }
    //     return l.roll < r.roll;
    // }

    // sort cut
    if (l.marks == r.marks)
    {
        return l.roll < r.roll;
    }
    else
    {
        return l.marks > r.marks;
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
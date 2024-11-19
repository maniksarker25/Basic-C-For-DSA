// dynamic object
#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // use constructor
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{

    Student tuli(2, 2, 4.55);
    // for dynamic object---------------
    Student *tula = new Student(3, 4, 4.44);
    cout << tuli.roll << " " << tuli.cls << " " << tuli.gpa << endl;
    // for print need to dereference
    cout << tula->roll << " " << tula->cls << " " << tula->gpa << endl;

    return 0;
}
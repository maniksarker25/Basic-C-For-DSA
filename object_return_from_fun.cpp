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

        (*this).roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student fun()
{
    Student tula(56, 5, 5);
    return tula;
}

int main()
{

    Student tuli(2, 2, 4.55);
    Student tula = fun();
    cout << tuli.roll << " " << tuli.cls << " " << tuli.gpa << endl;
    cout << tula.roll << " " << tula.cls << " " << tula.gpa << endl;

    return 0;
}
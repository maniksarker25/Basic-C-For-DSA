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

Student *fun()
{
    Student tula(50, 5, 5);
    Student *p = &tula;
    return p;
}

int main()
{

    Student *p = fun();

    // find garbage value because after return the function is cleared form static memory
    cout << p->roll << " " << p->cls << " " << p->gpa << endl;

    return 0;
}
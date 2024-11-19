// dynamic funtion return from fucntion

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
    Student *p = new Student(50, 5, 5);
    return p;
}

int main()
{

    Student *p = fun();

    // now i can get the correct value because this is dynamic object
    cout << p->roll << " " << p->cls << " " << p->gpa << endl;

    return 0;
}
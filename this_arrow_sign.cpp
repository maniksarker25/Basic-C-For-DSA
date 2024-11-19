// this keyword , arrow sign

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
        // (*this).roll = roll; here this is not a object , this is pointer that point tuli , tula etc;
        // so that why here when i acess filed then make it arrow ,
        /// if we do not use arrow then need to dereference the this--------------
        (*this).roll = roll;
        // shortcut is (=>);
        // this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{

    Student tuli(2, 2, 4.55);
    Student tula(5, 5, 5);
    cout << tuli.roll << " " << tuli.cls << " " << tuli.gpa << endl;
    cout << tula.roll << " " << tula.cls << " " << tula.gpa << endl;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // use constructor
    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{

    // without constructor need to repet the code for set value
    // Student tuli;
    // Student tula;
    // ------------
    // tuli.roll = 20;
    // tuli.cls = 3;
    // tuli.gpa = 4.33;
    // // for tula--------

    // tula.roll = 3;
    // tula.cls = 3;
    // tula.gpa = 5;

    // with constructor ==========================

    Student tuli(2, 2, 4.55);
    Student tula(4, 5, 3.44);

    cout << tuli.roll << " " << tuli.cls << " " << tuli.gpa << endl;
    cout << tula.roll << " " << tula.cls << " " << tula.gpa << endl;

    return 0;
}
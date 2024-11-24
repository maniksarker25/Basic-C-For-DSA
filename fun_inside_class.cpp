// function inside class

#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int rol;
    int math;
    int english;
    Student(string name, int rol, int math, int english)
    {
        this->name = name;
        this->rol = rol;
        this->math = math;
        this->english = english;
    }

    // fun in class
    void hello()
    {
        cout << "Hello from" << " " << name << endl;
    }

    //
    void total()
    {
        cout << "Total marks of " << name << math + english << endl;
    }
};

int main()
{
    Student manik("Manik Sarker", 23, 75, 99);
    manik.hello();
    Student roton("Roton Sarker", 43, 87, 34);
    roton.total();
    return 0;
}
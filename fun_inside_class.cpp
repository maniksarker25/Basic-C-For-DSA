// function inside class

#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int rol;
    Student(string name, int rol)
    {
        this->name = name;
        this->rol = rol;
    }

    // fun in class
    void hello()
    {
        cout << "Hello from" << " " << name << endl;
    }
};

int main()
{
    Student manik("Manik Sarker", 23);
    manik.hello();
    Student roton("Roton Sarker", 43);
    roton.hello();
    return 0;
}
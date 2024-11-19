#include <bits/stdc++.h>

using namespace std;

// declare a class
class Student
{
public:
    char name[100]; // take 100 byte
    int roll;       // 4 byte
    double gpa;     // 8 byte
};

int main()
{

    // create object by using student class
    Student student1;
    student1.roll = 20;
    student1.gpa = 3.45;
    // for name
    char temp[100] = "Manik";
    strcpy(student1.name, temp);

    cout << student1.name << endl
         << student1.roll << endl
         << student1.gpa;

    return 0;
}
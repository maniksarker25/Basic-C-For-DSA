#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;
    Student(char name[100], int roll, char section, int math_marks, int cls)
    {
        strcpy(this->name,name);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{

    Student std1("manik",22,'A',56,3);
    Student std2("roton",23,'B',87,4);
    Student std3("Habul",34,'C',89,4);


    int max_math_marks = max({std1.math_marks,std2.math_marks,std3.math_marks});

    if(max_math_marks == std1.math_marks){
        cout << std1.name << endl;
    }

    else if(max_math_marks == std2.math_marks){
        cout << std2.name <<endl;
    }
    else if(max_math_marks == std3.math_marks){
        cout << std3.math_marks << endl;
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;
class Student
{
public:
    char name[100]; // take 100 byte
    int roll;       // 4 byte
    double gpa;     // 8 byte
};
int main()
{
    Student std1, std2;

    // input---

    // note: if string have space then need to use +> cin.getline(std1.name,100); and other input will go the new line
    // but here is problem getline take space and enter so need to use cin.ignore for enter
    // cin >> std1.name >> std1.roll >> std1.gpa;
    // cin >> std2.name >> std2.roll >> std2.gpa;

    cin.getline(std1.name, 100);
    cin >> std1.roll >> std1.gpa;
    // use ignore for ignore enter
    cin.ignore();
    cin.getline(std2.name, 100);
    cin >> std2.roll >> std2.gpa;

    // output
    cout << std1.name << " "
         << std1.roll << " "
         << std1.gpa << endl;

    cout << std2.name << " "
         << std2.roll << " "
         << std2.gpa << endl;
    return 0;
}
#include <iostream>
using namespace std;

class Student
{
public:
    int rollno;
    string name;
    string course;

    void display()
    {
        cout << "-----STUDENT DETAILS-----" << "\n";
        cout << "Roll No: " << rollno << "\n";
        cout << "Name: " << name << "\n";
        cout << "Course: " << course << "\n";
    }
};

int main()
{
    Student s1;

    s1.rollno = 68;
    s1.name = "pritam";
    s1.course = "AI_ML";

    s1.display();

    return 0;
}

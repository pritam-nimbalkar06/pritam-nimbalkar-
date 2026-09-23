#include<iostream>
using namespace std;

class Employee
{
public:
    int employeeID;
    string name;
    string department;

    void showDetails()
    {
        cout << "------ Employee Information ------" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
    }
};

int main()
{
    Employee emp1;

    emp1.employeeID = 4632647;
    emp1.name = "pritam nimbalkar";
    emp1.department = "soai";

    emp1.showDetails();

    return 0;
}

#pragma once
#include <iostream>
#include "clsPerson.h"
using namespace std;

class clsEmployee : public clsPerson
{
private:
    int _Salary;
    string _Title;
    string _Department;

public:
    clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary) : clsPerson(ID, FirstName, LastName, Email, Phone)
    {
        _Title = Title;
        _Department = Department;
        _Salary = Salary;
    }

    void setTitle(string Title)
    {
        _Title = Title;
    }

    string Title()
    {
        return _Title;
    }

    void setDepartment(string Department)
    {
        _Department = Department;
    }

    string Department()
    {
        return _Department;
    }

    void setSalary(int Salary)
    {
        _Salary = Salary;
    }

    int Salary()
    {
        return _Salary;
    }

    void Print()
    {
        cout << "Info" << endl;
        cout << "_______________________________\n";
        cout << "ID          : " << ID() << endl;
        cout << "FirstName   : " << FirstName() << endl;
        cout << "LastName    : " << LastName() << endl;
        cout << "FullName    : " << FullName() << endl;
        cout << "Email       : " << Email() << endl;
        cout << "Phone       : " << Phone() << endl;
        cout << "Title       : " << _Title << endl;
        cout << "Department  : " << _Department << endl;
        cout << "Salary      : " << _Salary << endl;
        cout << "_______________________________\n";
    }
};

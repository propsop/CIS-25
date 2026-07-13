#include <iostream>
using namespace std;

class User {
public:
    virtual void accesslevel() {
        cout << "General Access\n";
    }
};

class Employee : public User {
public:
    void accesslevel() override {
        cout << "Employee Access\n";
    }
};

class Manager : public Employee {
public:
    void accesslevel() override {
        cout << "Management Access\n";
    }

};

class Admin : public Manager {
public:
    void accesslevel() override {
        cout << "Admin Access\n";
    }

};

int main()
{
    int option;

    cout << "What permissions would you like to view?\n";
    cout << "1.User Access Level\n";
    cout << "2.Employee Access Level\n";
    cout << "3.Manager Access Level\n";
    cout << "4.Admin Access Level\n";
    cin >> option;
    if (option == 1) {
        User user;
        user.accesslevel();
    }
    if (option == 2) {
        Employee employee;
        employee.accesslevel();
    }
    if (option == 3) {
        Manager manager;
        manager.accesslevel();
    }
    if (option == 4) {
        Admin admin;
        admin.accesslevel();
    }
}

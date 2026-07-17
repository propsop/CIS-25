#include <iostream>
using namespace std;

struct Patient {

    int id;
    string name;
    int age;

};


int main()
{
    //regular variable
    Patient patient1;

    //assign values
    patient1.id = 101;
    patient1.name = "John";
    patient1.age = 40;

    //regular variable
    Patient patient2;

    //assign values
    patient2.id = 102;
    patient2.name = "Jane";
    patient2.age = 30;

    //pointer storing address
    Patient* p = &patient1;

    //display using pointer
    cout << "ID: " << p->id << endl;
    cout << "Name: " << p->name << endl;
    cout << "Age: " << p->age << endl;

    Patient* a = &patient2;

    cout << "ID: " << a->id << endl;
    cout << "Name: " << a->name << endl;
    cout << "Age: " << a->age << endl;

    return 0;
}


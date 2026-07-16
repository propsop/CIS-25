#include <iostream>

using namespace std;

class Product {
private:
    int id;
    string name;
    float price;
public:
    //This is a constructor that can be called in main to repeat this code with different arguments
    Product(int i, string n, float p) {
        id = i;
        name = n;
        price = p;
        cout << "constructor called\n";
    }
    //destructors are made with the class and ~
    ~Product() {
        cout << "destructor called\n";
    }
    void printDetails() {
        cout << "ID: " << id << ",Name: " << name << ",Price: $" << price << endl;
    }
};

int main()
{
    Product Item1(101, "Notebook", 4.99);
    Item1.printDetails();
    Product Item2(102, "Pencil", 0.99);
    Item2.printDetails();
    return 0;
}

#include <iostream>
#include <list>
using namespace std;

//This is a class called fruits that has 4 attributes that are public
class fruits {
public:
    string Name;
    string Taste;
    int amount;
    // to use a list you need to #include <list>
    list<string> attributes;

};

int main()
{
    //fruit is an object of the class fruits
    fruits fruit;
    fruit.Name = "Apple";
    fruit.Taste = "Sweet";
    fruit.amount = 3;
    fruit.attributes = { "\tred","\tgreen","\tyellow","\tsmooth","\thas seeds","\thas stem" };

    cout << "Name:\n\t" << fruit.Name << endl;
    cout << "Taste:\n\t" << fruit.Taste << endl;
    cout << "amount:\n\t" << fruit.amount << endl;
    cout << "attributes:" << endl;
    for (string attribute : fruit.attributes) {
        cout << attribute << endl;
    }

    system("pause>0");
}

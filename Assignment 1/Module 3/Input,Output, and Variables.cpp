#include <iostream>
using namespace std;

int main()
{
    string item;
    int quantity;
    float cost;

    cout << "Please enter item name:\n";
    cin >> item;
    cout << "Please enter quantity of item\n";
    cin >> quantity;
    cout << "Please enter cost of item\n";
    cin >> cost;

    cout << "Total cost for " << quantity << " " << item << "s" << ":$" << (quantity * cost) << endl;
    system("pause>0");
}
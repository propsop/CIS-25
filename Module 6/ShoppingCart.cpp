//BUGS THAT I DONT KNOW HOW TO SOLVE!! PLEASE HELP!!! :( 
//item name doesnt appear even though I used #include <string>???
//Exit option not working even though I used break???
//When adding new item, it replaces the old item???

#include <iostream>
#include <list>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

class item {
public:
    string Name;
    double price;
    int quantity;
    //returns price x quantity
    double getTotalPrice() {
        return price * quantity;
    }
};

int main()
{
    while (true){
    item shoppingcart;
    int option;
    cout << "===== SHOPPING CART MENU =====\n" << "1. Add item to cart\n" << "2. View checkout\n" << "3.Exit\n" << "Choose an option: ";
    cin >> option;
    if (option == 1) {
        cout << "Enter item name: ";
        cin >> shoppingcart.Name;
        cout << "Enter item price ";
        cin >> shoppingcart.price;
        cout << "Enter item quantity ";
        cin >> shoppingcart.quantity;

        ofstream file("cart.txt");
        if (file.is_open())
            file << shoppingcart.Name << " " << shoppingcart.price << " " << shoppingcart.quantity << endl;
        file.close();
        cout << "Item added to cart\n";
        continue;
    }

    else {
        if (option == 2)
            ifstream file("cart.txt");
            cout << "===== CHECKOUT =====\n" << shoppingcart.Name << " - " << shoppingcart.price << " x " << shoppingcart.quantity << " = " << shoppingcart.getTotalPrice() << endl;
            continue;

        if (option == 3)
            cout << "thanks for shopping!";
            break;
    }
    }

    system("pause>0");

}
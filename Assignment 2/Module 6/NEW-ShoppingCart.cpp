//Unsure how to get grand total???

#include <iostream>
#include <list>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

class item {
private:
    double totalAccumulator = 0.0;
public:
    string Name;
    double price;
    int quantity;
    //returns price x quantity
    double getTotalPrice() {
        double itemTotal = price * quantity;
        totalAccumulator += itemTotal;

        return itemTotal;
    }
    
    double getOverallPrice() {
        return totalAccumulator;
    }

};

bool firstloop = true;

int main() {
    while (true) {
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

            ofstream file("cart.txt", fstream::app);

            if (firstloop) {
                if (file.is_open())
                    file << "===== CHECKOUT =====" << endl;
            }

            firstloop = false;

            if (file.is_open())
                file << shoppingcart.Name << " - " << shoppingcart.price << " x " << shoppingcart.quantity << " = " << shoppingcart.getTotalPrice() << endl;

            file.close();
            cout << "Item added to cart\n";
            continue;
        }

        if (option == 1) {
            ofstream file("cart.txt", fstream::app);
            if (file.is_open())
                file << "TEST:" << shoppingcart.getOverallPrice();
        }

        else {
            if (option == 2) {
                ifstream file("cart.txt");
                if (file.is_open()) {
                    cerr << file.rdbuf() << endl;
                    continue;
                }
            }
            if (option == 3)
                cout << "thanks for shopping!";
                break;
        }
    }

    system("pause>0");

}

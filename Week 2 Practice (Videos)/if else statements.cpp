
#include <iostream>
using namespace std;

int main()
{
    //user enters integer number
    //program writes out if the number is even or odd
    
    int number;
    cout << "please enter a number:";
    cin >> number;
    // "%" returns the remainder of the division of two numbers
    if (number % 2 == 0)
        cout << "you have entered an even number" << endl;
    else
        cout << "you have entered an odd number" << endl;

    cout << "okay bye";


    system("pause>0");
}

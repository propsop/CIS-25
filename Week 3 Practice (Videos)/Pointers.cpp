using namespace std;
#include <iostream>

int main()
{
    int n = 5;
    //putting "&" before a variable gives the adress to that variable
    cout << &n << endl;
    //using * indicates its a pointer
    int* ptr = &n;

    cout << ptr << endl;
    //to write the value of the pointer your need to derefrence it by putting *
    cout << *ptr << endl;

    //You can reassign the pointer like this
    *ptr = 10;

    cout << *ptr << endl;

    //n is now 10 because the adress was stored in the pointer and then the pointer was derefrenced and reassigned
    cout << n << endl;

    system("pause>0");
    return 0;

}

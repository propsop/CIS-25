#include <iostream>
using namespace std;

int main()
{
    //int is whole numbers
    int YearOfBirth = 2008;
    // char is a datatype for a single character (a,1,#,etc)
    char gender = 'm';
    // bool is true/false
    bool isolderthan18 = true;
    // float is not whole numbers
    float averagegrade = 4.5;
    // double, like float can hold decimals but it has double the amount of memory it can hold
    double balance = 231239123.1253;

    //sizeof finds the size of something in bytes
    cout << "size of int is " << sizeof(YearOfBirth) << " bytes\n";

    //INT_MIN finds the minimal value of INT and vise versa for INT_MAX
    //-1,-2,-3,...,-2147483648
    cout << "size of minimal value is " << INT_MIN << endl;
    // positive range is one higher from the negative range because it also includes 0
    cout << "size of maximum value is " << INT_MAX << endl;

    //unsigned INT is only for positive which doubles the maximum value
    cout << "Size of unsighned int is " << sizeof(unsigned int) << "bytes\n";
    cout << "UInt max value is " << UINT_MAX << endl;

    cout << "size of char is " << sizeof(gender) << " bytes\n";
    cout << "size of bool is " << sizeof(isolderthan18) << " bytes\n";
    cout << "size of float is " << sizeof(averagegrade) << " bytes\n";
    cout << "size of double is " << sizeof(balance) << " bytes\n";

    system("pause>0");
}
#include <iostream>
using namespace std;

int main()
{
    //float is a decimal number
    float annualsalary;

    //cin is console input
    cout << "pls enter ur annual salary ";
    cin >> annualsalary;

    float monthlysalary = annualsalary / 12;

    //cout is console output, basically to make the console say this string
    //endl is to end the line, you can also use /n
    cout << "Your monthly salary is " << monthlysalary << endl;
    cout << "In 10 years you will earn " << annualsalary * 10 << endl;

    //char holds a single character like a,1,!
    char character = 'A';

    cout << "here is the letter a looks like capitalized," << character;

    system("pause>0");

}

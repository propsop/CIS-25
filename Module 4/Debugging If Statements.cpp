#include <iostream>

using namespace std;

int main()
{
    // missing ; instead of ,
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    // needs >> instead of just >
    //uses n1 twice instead of n2
    cin >> n1 >> n2 >> n3;

    //missing a )
    //should be if n1 is greater than n2 and n3
    if (n1 >= n2 && n1 >= n3)
        cout << "Largest number: " << n1;

    //should be if n2 is greater than n1 and n3
    //if should be a nested if else statement
    else
    {
    //Largest number should be n3
        if (n2 >= n1 && n2 >= n3)
        //missing ;
        cout << "Largest number: " << n2;
        else
            cout << "Largest number: " << n3;
    }
    system("pause > 0");
    return 0;
}

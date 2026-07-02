using namespace std;
#include <iostream>

int main()
{
    //writes all numbers between 100-500 that are divisible by 3 and 5

    int counter = 100;
    while (counter <= 500) 
    {
        if (counter % 3 == 0 && counter % 5 == 0)
            cout << counter << " is divisible\n";
            // ++ adds 1 to the counter like i = 0 + 1
        counter++;
    }

    system("pause>0");
}

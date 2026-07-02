#include <iostream>
using namespace std;

//void means nothing/no type
void function();

void main()
{
    cout << "hello from main()\n";
    function();

    system("pause>0");
}

void function()
{
    cout << "hello from function()" << endl;
}
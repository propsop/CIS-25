#include <iostream>
using namespace std;

int main()
{
	cout << "Hello Inventory System!\n";

	//int is whole numbers
	int age = 18;
	//float is numbers with decimals
	float height = 5.9;
	//char is a single character (a,1,#)
	char gender = 'm';

	//output sizes of int(age),float(height),and char(gender) in bytes
	cout << "\tsize of int is " << sizeof(age) << " bytes\n";
	cout << "\tsize of float is " << sizeof(height) << " bytes\n";
	cout << "\tsize of char is " << sizeof(gender) << " bytes\n";
	
	system("pause>0");
}

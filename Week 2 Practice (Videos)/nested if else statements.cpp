using namespace std;
#include <iostream>

int main()
{
    //user enters sidelengths of a triangle (a,b,c)
    //program writes out if the triangle is equalaterial(all sides are equal), isosceles(two sides are equal), or scalene(all sides are different)

    float a, b, c;
    cout << "a,b,c:";
    cin >> a >> b >> c;
    //&& is and
    if (a == b && b == c)
        cout << "equalaterial triangle";
    else //!= means NOT equal to
    {
        if (a != b && b != c && c != a)
            cout << "scalene triangle";
        else
            cout << "isosceles triangle";
    }
    system("pause>0");
}

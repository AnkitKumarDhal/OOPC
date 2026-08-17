#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the 3 numbers: ";
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is the greatest";
        }
        else
        {
            cout << c << " is the greatest";
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << " is the greatest";
        }
        else
        {
            cout << c << " is the greatest";
        }
    }

    return 0;
}

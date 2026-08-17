#include <iostream>
using namespace std;

int greatest(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

int main()
{
    int a, b, c;

    cout << "Enter the 3 numbes: ";
    cin >> a >> b >> c;

    cout << "The greatest number among the 3 is: " << greatest(a, b, c);

    return 0;
}

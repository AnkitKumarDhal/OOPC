#include <iostream>
using namespace std;

void eveOdd(int n)
{
    if (n % 2 == 0)
    {
        cout << "The number " << n << " is even.";
    }
    else
    {
        cout << "The number " << n << " is odd.";
    }
}

int main()
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    eveOdd(n);

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n, factorial = 1;

    cout << "Enter the number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    cout << "Factorial of the number " << n << " is: " << factorial;
    return 0;
}

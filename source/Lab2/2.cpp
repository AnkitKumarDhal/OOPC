#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int prod(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    return a / b;
}

int mod(int a, int b)
{
    return a % b;
}

int main()
{
    int a, b;

    cout << "Enter the two numbers: ";
    cin >> a >> b;

    cout << endl << "Sum of the two numbers: " << add(a, b) << endl;
    cout << "Difference of the two numbers: " << sub(a, b) << endl;
    cout << "Product of the two numbers: " << prod(a, b) << endl;
    cout << "Division of the two numbers: " << division(a, b) << endl;
    cout << "Modulus of the two numbers: " << mod(a, b) << endl;

    return 0;
}

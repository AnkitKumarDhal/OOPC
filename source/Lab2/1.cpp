#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;

    cout << "Enter the two numbers: ";
    cin >> a >> b;

    cout << "The sum of the two numbers is: " << add(a, b) << endl;

    return 0;
}

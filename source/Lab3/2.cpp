#include <iostream>
using namespace std;

int main()
{
    int a[10], key, found = 0;

    cout << "Enter the elements: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the key to search: ";
    cin >> key;

    for (int i = 0; i < 10; i++)
    {
        if (a[i] == key)
        {
            found = 1;
            cout << "Key found at index: " << i;
            break;
        }
    }

    if (found == 0)
    {
        cout << "Key not found in the array.";
    }

    return 0;
}

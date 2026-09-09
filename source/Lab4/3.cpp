#include <iostream>
using namespace std;

class item
{
    int number;
    float cost;

  public:
    void get_data()
    {
        cout << "Enter item number: ";
        cin >> number;
        cout << "Enter item cost: ";
        cin >> cost;
    }

    void show()
    {
        cout << "Item number: " << number << endl;
        cout << "Item cost: " << cost << endl;
    }
};

int main()
{
    item I;
    I.get_data();
    I.show();
    return 0;
}

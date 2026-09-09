#include <iostream>
using namespace std;

class item
{
    int code, quantity;
    float price;

  public:
    void get_data()
    {
        cout << "Enter item code: ";
        cin >> code;
        cout << "Enter quantity: ";
        cin >> quantity;
        cout << "Enter price: ";
        cin >> price;
    }

    void show()
    {
        cout << "Item code: " << code << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    item I;
    I.get_data();
    I.show();
    return 0;
}

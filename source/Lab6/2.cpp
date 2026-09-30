#include <iostream>
using namespace std;

class ABC;

class XYZ
{
    int data;

  public:
    void set_value(int x)
    {
        data = x;
    }

    friend void add(XYZ, ABC);
};

class ABC
{
    int data;

  public:
    void set_value(int x)
    {
        data = x;
    }

    friend void add(XYZ, ABC);
};

void add(XYZ x, ABC y)
{
    cout << "Sum: " << x.data + y.data << endl;
}

int main()
{
    XYZ x;
    ABC y;

    int a, b;

    cout << "Enter values of data in both classes: ";
    cin >> a >> b;

    x.set_value(a);
    y.set_value(b);

    add(x, y);

    return 0;
}

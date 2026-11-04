#include <iostream>
using namespace std;

class Space
{
    int x, y, z;

  public:
    void get_data(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }

    void display()
    {
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
        cout << "Z: " << z << endl;
    }

    friend void operator++(Space &s);
};

void operator++(Space &s)
{
    s.x = ++s.x;
    s.y = ++s.y;
    s.z = ++s.z;
}

int main()
{
    Space first;
    int m, n, o;
    cout << "Enter values of x, y, z: ";
    cin >> m >> n >> o;
    first.get_data(m, n, o);
    cout << "Before unary ++: " << endl;
    first.display();
    cout << endl << "After unary ++: " << endl;
    ++first;
    first.display();
    return 0;
}

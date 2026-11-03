#include <iostream>
using namespace std;

class B
{
    int a;

  public:
    int b;

    void set_ab()
    {
        cout << "Enter the values of a and b: ";
        cin >> a >> b;
    }

    int get_a()
    {
        return a;
    }

    void show()
    {
        cout << "The value of a is: " << a << endl;
    }
};

class D : public B
{
  public:
    int c;

    void mul()
    {
        c = b * get_a();
    }

    void display()
    {
        cout << "The multiplication of a and b is: " << c << endl;
    }
};

int main()
{
    D obj;
    obj.set_ab();
    obj.show();
    obj.mul();
    obj.display();
    return 0;
}

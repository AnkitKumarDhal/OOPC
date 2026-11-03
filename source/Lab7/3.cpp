#include <iostream>
using namespace std;

class M
{
  protected:
    int m;

  public:
    void put_m()
    {
        cout << "Enter value of m: ";
        cin >> m;
    }

    int get_m()
    {
        return m;
    }
};

class N
{
  protected:
    int n;

  public:
    void put_n()
    {
        cout << "Enter value of n: ";
        cin >> n;
    }

    int get_n()
    {
        return n;
    }
};

class P : public M, public N
{
  public:
    void display()
    {
        cout << "Multiplication of m and n: " << get_m() * get_n() << endl;
        cout << "Value of m: " << get_m() << endl;
        cout << "Value of n: " << get_n() << endl;
    }
};

int main()
{
    P obj;
    obj.put_m();
    obj.put_n();
    obj.display();
    return 0;
}

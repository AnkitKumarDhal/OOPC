#include <iostream>
using namespace std;

class New
{
    int x;

  public:
    New()
    {
        cout << "Enter value of x: ";
        cin >> x;
    }
    int display()
    {
        return x;
    }
};

int main()
{
    New obj;
    cout << obj.display();
    return 0;
}

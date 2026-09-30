#include <iostream>
using namespace std;

class Sample
{
    int a, b;

  public:
    void set_value()
    {
        cout << "Enter values of a and b: ";
        cin >> a >> b;
    }

    friend float mean(Sample s);
};

float mean(Sample s)
{
    return (s.a + s.b) / 2.0;
}

int main()
{
    Sample obj;
    obj.set_value();
    cout << "Mean: " << mean(obj);
    return 0;
}

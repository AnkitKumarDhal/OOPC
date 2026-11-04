#include <iostream>
using namespace std;

class Marks
{
    int msem, esem;

  public:
    Marks()
    {
        msem = 0;
        esem = 0;
    }

    Marks(int ms, int es)
    {
        msem = ms;
        esem = es;
    }

    void display()
    {
        cout << "Midsem: " << msem << endl;
        cout << "Endsem: " << esem << endl;
    }

    Marks operator-(Marks m);
};

Marks Marks::operator-(Marks m)
{
    Marks temp;
    temp.msem = msem - m.msem;
    temp.esem = esem - m.esem;
    return temp;
}

int main()
{
    int a, b, c, d;
    cout << "Enter marks of first student: ";
    cin >> a >> b;
    cout << "Enter marks of second student: ";
    cin >> c >> d;

    Marks m1(a, b), m2(c, d);
    cout << endl << "Student 1: " << endl;
    m1.display();
    cout << endl << "Student 2: " << endl;
    m2.display();
    Marks answer = m1 - m2;
    cout << endl << "Student 1 marks - Student 2 marks = " << endl;
    answer.display();
    return 0;
}

#include <iostream>
using namespace std;

class SI
{
    int principal, time;
    float rate;

  public:
    void get_data()
    {
        cout << "Enter principal amount: ";
        cin >> principal;
        cout << "Enter time (in years): ";
        cin >> time;
        cout << "Enter rate of interest: ";
        cin >> rate;
    }

    float show()
    {
        return (principal * time * rate) / 100;
    }
};

int main()
{
    SI A;
    A.get_data();

    cout << "Simple interest: " << A.show() << endl;
    return 0;
}

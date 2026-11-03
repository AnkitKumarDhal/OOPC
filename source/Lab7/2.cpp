#include <iostream>
using namespace std;

class Student
{
  protected:
    int roll_no;

  public:
    void get_num()
    {
        cout << "Enter Roll Number: ";
        cin >> roll_no;
    }

    void put_num()
    {
        cout << "Roll Number: " << roll_no << endl;
    }
};

class Test : public Student
{
  protected:
    int s1, s2;

  public:
    void get_marks(int p1, int p2)
    {
        s1 = p1;
        s2 = p2;
    }

    void put_marks()
    {
        cout << "Marks in Subject 1: " << s1 << endl;
        cout << "Marks in Subject 2: " << s2 << endl;
    }
};

class Result : public Test
{
    int total;

  public:
    void display_result()
    {
        total = s1 + s2;
        cout << "Total Marks: " << total << endl;
    }
};

int main()
{
    Result r;
    int p1, p2;

    r.get_num();

    cout << "Enter marks in two subjects: ";
    cin >> p1 >> p2;

    r.get_marks(p1, p2);

    cout << "\nStudent Result\n";
    r.put_num();
    r.put_marks();
    r.display_result();

    return 0;
}

#include <iostream>
using namespace std;

int area(int l, int b)
{
    return l * b;
}

float area(float r)
{
    return 3.14 * r;
}

float area(float b, float h)
{
    return 0.5 * b * h;
}

int main()
{
    int l, b;
    float r, bT, h;

    cout << "Enter the length and breadth of the rectangle: ";
    cin >> l >> b;

    cout << "Enter the radius of the circle: ";
    cin >> r;

    cout << "Enter the base and height of the triangle: ";
    cin >> bT >> h;

    cout << endl << "Area of the rectangle is: " << area(l, b);
    cout << endl << "Area of the circle is: " << area(r);
    cout << endl << "Area of the triangle is: " << area(bT, h);

    return 0;
}

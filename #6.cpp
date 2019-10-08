#include <iostream>

using namespace std;

int main()
{
    float a1, b1, c1, a2, b2, c2;
    cout << "a1 = ";
    cin >> a1;
    cout << "b1 = ";
    cin >> b1;
    cout << "c1 = ";
    cin >> c1;
    cout << "a2 = ";
    cin >> a2;
    cout << "b2 = ";
    cin >> b2;
    cout << "c2 = ";
    cin >> c2;
    float k = b2/b1;
    float x = (c1*k-c2)/(a1*k-a2);
    float y = (c1-a1*x)/b1;
    cout << "x = " << x << endl << "y = " << y;
}

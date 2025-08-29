#include <iostream>
#include<string>
using namespace std;

void ReadNumbers(float &a,float&b)
{
    cout << "Enter number 1" << endl;
    cin >> a;

    cout << "Enter number 1" << endl;
    cin >> b;
}
float CalculateRectangleArea(float a, float b)
{
    return (a * b);
}
void PrintArea(float Area)
{
    cout << "Area = " << Area;
}

int main()
{
    float a, b;

    ReadNumbers(a, b);
    PrintArea(CalculateRectangleArea( a, b));
    return 0;
}


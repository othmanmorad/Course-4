#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float ReadCircumference()
{
    float L;
    cout << "Enter Circumference \n  : " << endl;
    cin >> L;
    return L;
}
float CircleAreaByCircumference(float L)
{
    const float PI = 3.14;
    float Area = (pow(L, 2)) / (4 * PI);
    return Area;
}
void PrintArea(float Area)
{
    cout << "\n Area = " << Area;
}
int main()
{
    PrintArea(CircleAreaByCircumference(ReadCircumference()));
   return 0;
}


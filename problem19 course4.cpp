#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float ReadDiameter()
{
    float D;
    cout << "Enter Diameter D:" << endl;
    cin >> D;
    return D;
}

float circleAreaByDiameter(float D)
{
    const float PI = 3.14;
    float Area = PI * pow(D, 2);
    return Area / 4;
}
void PrintArea(float Area)
{
    cout << "Area = " << Area;
}
int main()
{
    PrintArea(circleAreaByDiameter(ReadDiameter()));
    return 0;
}


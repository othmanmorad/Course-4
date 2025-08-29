#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadTriangleData(float& a, float& b, float& c)
{
    cout << "Enter triangle side A : " << endl;
    cin >> a;

    cout << "Enter triangle base B : " << endl;
    cin >> b;

    cout << "Enter triangle side C : " << endl;
    cin >>c;

}
float circleAreaByTriangle(float a, float b, float c)
{ 
    const float p = (a + b + c) / 2;
    const float PI = 3.14;
    float  T=  ((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))));
    
    float Area =PI * pow(T,2);
    return Area;
}
void PrintArea(float Area)
{
    cout << "Area = " << Area;
}
int main()
{
    float a, b, c;
    ReadTriangleData(a, b, c);
    PrintArea(circleAreaByTriangle(a, b, c));
}


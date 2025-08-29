

#include <iostream>
#include<string>
#include<cmath>
using namespace std;
void ReadNumbers(float& A, float& H)
{
    cout << " Please Enter triangle base A ?" << endl;
    cin >> A;

    cout << " Please Enter triangle height H ?" << endl;
    cin >> H;
}


float CalculateTriangleArea(float A, float H)
{
   float Area=( 0.5*A )* H;
   return Area;
}

void PrintArea(float Area)
{
    cout << "Area = " << Area;
}
int main()
{
    float A, H;
    ReadNumbers(A, H);
    PrintArea(CalculateTriangleArea(A, H));
}


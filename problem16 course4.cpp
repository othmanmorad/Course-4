#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadNumbers(float& A, float& B)
{
    cout << "Enter rectangle side A: " << endl;
    cin >> A;

    cout << "Enter  rectangle B : " << endl;
    cin >> B;
}
float RectangleAreaBySideAndDiagonal(float A, float B)
{ 
    
    float result = sqrt(pow(B, 2) - pow(A, 2));
    return A * result;

    
}

void PrintArea(float Area)
{
    cout << "Area = " << Area;
}
int main()
{
    float A, B;
    ReadNumbers(A, B);
    PrintArea(RectangleAreaBySideAndDiagonal(A, B));
}


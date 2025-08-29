#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void ReadTriangleData(float &A , float &B)
{
   
    cout << "Please Enter triangle side A   :  \n " << endl;
    cin >>A ;

    cout << "Please Enter triangle base B   : \n" << endl;
    cin >> B;
}
float CircleAreaByTriangle(float A ,float B)
{
    const float PI = 3.14;
    float Area = PI*((pow(B, 2) / 4 )* ( 2*A-B)/(2*A+B));
    return Area;
}
void PrintArea(float Area)
{
    cout << "\n Area = " << Area;
}
int main()
{
    float A, B;
    ReadTriangleData(A, B);
    PrintArea(CircleAreaByTriangle(A,B));
    return 0;
}


#include <iostream>
#include <string>
using namespace std;
//my solution 
//int ReadTotalSales()
//{
//    float TotalSales;
//    
//    
//     cout << "Enter Total sales between " << endl;
//     cin >> TotalSales;
//    
//
//        return TotalSales;
//}
//float calculatepercentage(float TotalSales)
//{
//    if (TotalSales > 1000000)
//        return TotalSales* 0.01;
//
//    else if (TotalSales > 500000)
//        return TotalSales * 0.02;
//
//    else if (TotalSales > 100000)
//        return TotalSales * 0.03;
//
//    else if (TotalSales > 50000)
//        return TotalSales * 0.05;
//
//    else
//        return TotalSales;
//}
//
//
//int main()
//{
//    cout << "percentage = " << calculatepercentage(ReadTotalSales());
//}


//mohammed's solution
float ReadTotalSales()
{
		float TotalSales;

		cout << "Enter Total sales between " << endl;
		cin >> TotalSales;

		return TotalSales;
}
float GetCommiissionPercentage(float TotalSales)
{
	if (TotalSales > 1000000)
		return  0.01;

	else if (TotalSales > 500000)
		return  0.02;

	else if (TotalSales > 100000)
		return  0.03;

	else if (TotalSales > 50000)
		return  0.05;

	else
		return 0.00;

 }
float CalculateTotalCommission(float TotalSales)
{

	return GetCommiissionPercentage(TotalSales) * TotalSales;

}
int main()
{    
	float TotalSales = ReadTotalSales();
	cout << endl << "Commission Percentage = " << GetCommiissionPercentage(TotalSales) * 100 << "%" << endl;
	cout << endl << "Total commission = " << CalculateTotalCommission(TotalSales) << endl;
}

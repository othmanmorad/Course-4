#include <iostream>
#include <string>
using namespace std;
 
float ReadNumber(string message)
{
	float number;
	cout << message<<endl;
	cin >> number;
	return number;
}
float sum()
{
	int sum = 0, number = 0, counter = 1;
	do
	{
		int number = ReadNumber("Please enter number  " + to_string(counter));

		if (number == -99)
		{
			break;
		}
		sum += number;
		counter++;
	} while (number != -99);
	return sum;
}
int main()
{

	cout << endl << "Sum= " << sum() << endl;
}
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
 //mysolution
//enum enAge {valid =1,invalid=2};
//int ReadAge(int from, int to)
//{
//    int age;
//    cout << "Enter Your Age between '" << from << "' and '" << to << "'" << endl;
//    cin >> age;
//    return age;
//}
//enAge ValidOrInvalidAge(int age,int from ,int to)
//{ 
//    if(age>=from&& age<=to)
//        return enAge::valid;
//    else
//        return enAge::invalid;
//}
//void PrintValidOrInvalidAge(enAge Result)
//{
//    if (Result==enAge::valid)
//        cout << " \n Valid Age ";
//    else
//        cout << " \n Invalid Age ";
//}
//int main()
//{ 
//    
//  
//    PrintValidOrInvalidAge(ValidOrInvalidAge(ReadAge(18, 45),18,45));
//}

//mohammed's solution
int ReadAge()
{
    int num;
    cout << "Enter Your Age"<< endl;
    cin >> num;
    return num;
}
bool ValidateNumberInRange(int num, int from, int to)
{
    return(num >= from && num <= to);
}
void PrintResult(int Age)
{
    if (ValidateNumberInRange(Age, 18, 45))
        cout <<Age<< " is a Valid age ";
    else
        cout <<Age<< " is a invalid age ";
}
int main()
{
    PrintResult(ReadAge());
    return 0;
}
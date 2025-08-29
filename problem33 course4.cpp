#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int ReadGrade(int from, int to)
{
    int grade;
    do
    {
        cout << "Enter grade between '" << from << "' and '" << to << "'" << endl;
        cin >> grade;
    } while (grade <from || grade >to);

        return grade;
}
char Estimate(int grade)
{
    if (grade >= 90)
        return 'A';

    else if ( grade >= 80)
        return 'B';

    else if ( grade >= 70)
        return 'C';

    else if ( grade >= 60)
        return 'D';

    else if ( grade >= 50)
        return 'E';
    else
        return 'F';

}
int main()
{
    cout << "Result " << Estimate(ReadGrade(0, 100)) << endl;
    return 0;
}


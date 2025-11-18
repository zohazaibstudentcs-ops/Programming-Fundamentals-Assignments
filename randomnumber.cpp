#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    double number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "You entered:" << number << endl;
    int randNum = rand() % (37 - 3 + 1) + 3;
    cout << "Random number (3 to 37):" << randNum << endl;
    double product = number * randNum;
    cout << "Product:" << product << endl;
    double powerResult = pow(number, randNum % 10);
    cout << "Number ^ (rand % 10):" << fixed << setprecision(6) <<powerResult<< endl;
    double sqrtResult = sqrt(randNum);
    cout << "Square root of rand:" << fixed << setprecision(6) << sqrtResult << endl;
    return 0;
}
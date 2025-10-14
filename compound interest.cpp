#include <iostream>
#include <cmath> // for pow()
using namespace std;
int main()
{
   double principal, rate, time;
   cout << "Enter principal amount: ";
   cin >> principal;
   cout << "Enter annual interest rate (in %): ";
   cin >> rate;
   cout << "Enter time (in years): ";
   cin >> time;
   // calculate compound interest (compounded annually)
   double amount = principal * pow(1 + (rate/100), time);
   double compoundInterest = amount - principal;
   cout << "Compound Interest = " << compoundInterest << endl;
   cout << "Total Amount = " << amount << endl;
   return 0;
}

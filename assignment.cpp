/*Write a program that inputs two times in hh:mm:ss format, add both times and displays the total time*/
#include <iostream>
using namespace std;
int main()
{
   int h1, m1, s1, h2, m2, s2;
   cout << "Enter first time (hh mm ss): "; // Input first time
   cin >> h1 >> m1 >> s1;
   cout << "Enter second time (hh mm ss): "; // Input second time
   cin >> h2 >> m2 >> s2;
   int totalSeconds = s1 + s2; // Add seconds and handle overflow
   int carryMinutes = totalSeconds / 60;
   totalSeconds %= 60;
   int totalMinutes = m1 + m2 + carryMinutes; // Add minutes and handle overflow
   int carryHours = totalMinutes / 60;
   totalMinutes %= 60;
   int totalHours = h1 + h2 + carryHours; // Add hours
   cout << "Total time: " << totalHours << ":" << totalMinutes << ":" << totalSeconds << endl;
   return 0;
}

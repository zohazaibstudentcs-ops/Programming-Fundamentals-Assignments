#include <iostream>
#include<windows.h>
using namespace std;
int main()
{
   HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
   SetConsoleTextAttribute(hConsole,5);
   int x=1;
   do
   {
      cout<<x<<")"<<"Zoha Zaib Qureshi\n";
      x++;
   } while (x<=10);
   SetConsoleTextAttribute(hConsole,7);
   return 0;
}

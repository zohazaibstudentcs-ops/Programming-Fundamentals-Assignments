#include<iostream>
using namespace std;
int fact(int n){
    if(n==0||n==1)
        return 1;
    else
        return (n*fact(n-1));
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num>=0)
        cout<<fact(num);
    else
        cout<<"factorial of negative numbers is not possible.";
    return 0;
}
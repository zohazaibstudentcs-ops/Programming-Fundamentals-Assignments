#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers: "<<endl;
    cin>>a>>b>>c;
    if (a==b)
        if(b==c)
            cout<<"Number are equal";
        else
            cout<<"Numbers are different";
    else
        cout<<"Number are different";
    return 0;
}
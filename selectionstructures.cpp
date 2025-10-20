/*Q4: Write a program that contains an if- statement that may be used to compute 
area of a square (area = side * side) or a triangle (area = 1/2 * base * height) 
after prompting the user to type the first character of the figure name (S or T).*/
#include<iostream>
using namespace std;
int main()
{
    float base, side, area_of_Sq, area_of_tri, height;
    char shape;
    cout << "Enter the first character of the shape (S for square, T for triangle): ";
    cin >> shape;
    if((shape=='S'||shape=='s'))
        {
            cout<<"Enter the length of side of square: ";
            cin>>side;
            area_of_Sq=side*side;
            cout<<"Area of square is "<<area_of_Sq;
        }
    else if((shape=='T'||shape=='t'))
        {
            cout<<"Enter base of triangle: ";
            cin>>base;
            cout<<"Enter height of triangle: ";
            cin>>height;
            area_of_tri=(0.5)*height*base;
            cout<<"Area of triangle is "<<area_of_tri;
        }
    else
        cout<<"Invalid Shape.";
    return 0;
}

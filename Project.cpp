/*Problem 3.8
Written by:Zoha Zaib Roll no 1   Date:19-Oct-2025*/
#include <iostream>
using namespace std;
int main()
{  
    const int Quiz_Weight=30;
    const int Midterm_Weight=40;
    const int Final_Weight=30;
    const float Quiz_Max=400.00;
    const float Midterm_Max=200.00;
    const float Final_Max=100.00;
    int quiz1,quiz2,quiz3,quiz4,totalquiz,midterm1,midterm2,totalmidterm,final;
    float quizpercent,midtermpercent,finalpercent,totalpercent;
    cout<<"============Quizzes============"<<endl;
    cout<<"Enter the score for first quiz:"<<endl;
    cin>>quiz1;
    cout<<"Enter the score for second quiz:"<<endl;
    cin>>quiz2;
    cout<<"Enter the score for third quiz:"<<endl;
    cin>>quiz3;
    cout<<"Enter the score for fourth quiz:"<<endl;
    cin>>quiz4;
    cout<<"============MidTerm============"<<endl;
    cout<<"Enter the score for first midterm:"<<endl;
    cin>>midterm1;
    cout<<"Enter the score for second midterm:"<<endl;
    cin>>midterm2;
    cout<<"============FinalTerm=========="<<endl;
    cout<<"Enter the score for final:"<<endl;
    cin>>final;
    totalquiz=quiz1+quiz2+quiz3+quiz4;
    totalmidterm=midterm1+midterm2;
    quizpercent=float(totalquiz)*Quiz_Weight/Quiz_Max;
    midtermpercent=float(totalmidterm)*Midterm_Weight/Midterm_Max;
    finalpercent=float(final)*Final_Weight/Final_Max;
    totalpercent=quizpercent+midtermpercent+finalpercent;
    cout<<"First quiz:     "<<quiz1<<endl;
    cout<<"Second quiz:    "<<quiz1<<endl;
    cout<<"Third quiz:     "<<quiz1<<endl;
    cout<<"Fourth quiz:    "<<quiz1<<endl;
    cout<<"Quiz total:     "<<totalquiz<<endl;
    cout<<"First Midterm:  "<<midterm1<<endl;
    cout<<"Second Midterm: "<<midterm1<<endl;
    cout<<"Midterm total:  "<<totalmidterm<<endl;
    cout<<"Final:          "<<final<<endl;
    cout<<"Quiz:           "<<quizpercent<<endl;
    cout<<"Midterm:        "<<midtermpercent<<endl;
    cout<<"Final:          "<<finalpercent<<endl;
    cout<<"Total:          "<<totalpercent<<endl;
    return 0;
}
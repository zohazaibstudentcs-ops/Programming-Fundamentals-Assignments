#include <iostream>
using namespace std;
int main()
{
    double attendance, quizzes, mids, finals, final_score;
    char grade;
    cout << "Enter quizzes score: ";
    cin >> quizzes;
    cout << "Enter MID Term score: ";
    cin >> mids;
    cout << "Enter FINAL Term score: ";
    cin >> finals;
    cout << "Enter Attendance: ";
    cin >> attendance;
    if (quizzes > 100 || quizzes < 0 || mids > 100 || mids < 0 || finals > 100 || finals < 0 || attendance > 100 || attendance < 0)
        cout << "Invalid input. Score and Attendance should only be 0 to 100";
    else
    {
        final_score = quizzes * 0.2 + mids * 0.3 + finals * 0.5;
        if (final_score >= 90)
        {
            if (attendance < 75)
                grade = 'B';
            else
                grade = 'A';
            cout << "Final score is " << final_score << endl;
            cout << "Grade is " << grade;
        }
        else if (final_score >= 80)
        {
            if (attendance < 75)
                grade = 'C';
            else
                grade = 'B';
            cout << "Final score is " << final_score << endl;
            cout << "Grade is " << grade;
        }
        else if (final_score >= 70)
        {
            if (attendance < 75)
                grade = 'D';
            else
                grade = 'C';
            cout << "Final score is " << final_score << endl;
            cout << "Grade is " << grade;
        }
        else if (final_score >= 60)
        {
            if (attendance < 75)
                grade = 'F';
            else
                grade = 'D';
            cout << "Final score is " << final_score << endl;
            cout << "Grade is " << grade;
        }
        else
        {
            grade = 'F';
            cout << "Final score is " << final_score << endl;
            cout << "Grade is " << grade;
        }
    }
    return 0;
}


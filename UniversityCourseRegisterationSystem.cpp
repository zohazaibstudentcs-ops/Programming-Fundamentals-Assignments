#include <iostream>
using namespace std;
int main()
{
    string department;
    int semester, credithours;
    cout << "Department Codes:" << endl;
    cout << "CS - Computer Science" << '\n'
         << "EE - Electrical Engineering" << '\n'
         << "ME - Mechanical Engineering" << '\n'
         << "BBA - Business Administration" << endl;
    cout << "Select your deparment: ";
    cin >> department;
    cout << "Enter semester (1 - 8):";
    cin >> semester;
    if (department == "CS" || department == "cs")
    {
        switch (semester)
        {
        case 1:
            cout << "Programming Fundamentals - 3 CH | Prerequisites: None" << endl;
            cout << "Applications of ICT - 3 CH | Prerequisites: None" << endl;
            cout << "Discrete Structures - 3 CH | Prerequisites: None" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 2:
            cout << "Object-Oriented Programming - 3 CH | Prerequisites: Programming Fundamentals" << endl;
            cout << "Linear Algebra - 3 CH | Prerequisites: None" << endl;
            cout << "Applied Physics - 3 CH | Prerequisites: None" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 3:
            cout << "Data Structures & Algorithms - 3 CH | Prerequisites: Object-Oriented Programming" << endl;
            cout << "Calculus-I - 3 CH | Prerequisites: Linear Algebra" << endl;
            cout << "Functional English - 3 CH | Prerequisites: None" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 4:
            cout << "Database Management Systems - 3 CH | Prerequisites: Data Structures & Algorithms" << endl;
            cout << "Calculus-II - 3 CH | Prerequisites: Calculus-I" << endl;
            cout << "Expository Writing - 3 CH | Prerequisites: Functional English" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 5:
            cout << "Operating Systems - 3 CH | Prerequisites: Data Structures & Algorithms" << endl;
            cout << "Probability & Statistics - 3 CH | Prerequisites: Discrete Structures" << endl;
            cout << "Digital Logic Design - 3 CH | Prerequisites: None" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 6:
            cout << "Computer Networks - 3 CH | Prerequisites: Operating Systems" << endl;
            cout << "Software Engineering - 3 CH | Prerequisites: Data Structures & Algorithms" << endl;
            cout << "Human Computer Interaction - 3 CH | Prerequisites: None" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 7:
            cout << "Information Security - 3 CH | Prerequisites: Computer Networks" << endl;
            cout << "Parallel & Distributed Computing - 3 CH | Prerequisites: Operating Systems" << endl;
            cout << "Final Year Project-I - 3 CH | Prerequisites: Department Approval" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 8:
            cout << "Cloud Computing - 3 CH | Prerequisites: Computer Networks" << endl;
            cout << "Cyber Security - 3 CH | Prerequisites: Information Security" << endl;
            cout << "Final Year Project-II - 3 CH | Prerequisites: Final Year Project-I" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        default:
            cout << "Invalid semester choice!" << endl;
        }
    }
    else if (department == "EE" || department == "ee")
    {
        switch (semester)
        {
        case 1:
            cout << "Applied Physics - 3 CH | Prerequisites: None" << endl;
            cout << "Basic Electrical Engineering - 3 CH | Prerequisites: None" << endl;
            cout << "Calculus-I - 3 CH | Prerequisites: None" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 2:
            cout << "Programming Fundamentals - 3 CH | Prerequisites: None" << endl;
            cout << "Linear Algebra - 3 CH | Prerequisites: Calculus-I" << endl;
            cout << "Circuit Analysis - 3 CH | Prerequisites: Basic Electrical Engineering" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 3:
            cout << "Electronic Devices & Circuits - 3 CH | Prerequisites: Circuit Analysis" << endl;
            cout << "Differential Equations - 3 CH | Prerequisites: Calculus-I" << endl;
            cout << "Digital Logic Design - 3 CH | Prerequisites: None" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 4:
            cout << "Signals & Systems - 3 CH | Prerequisites: Differential Equations" << endl;
            cout << "Electromagnetic Fields - 3 CH | Prerequisites: Calculus-I" << endl;
            cout << "Probability & Statistics - 3 CH | Prerequisites: None" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 5:
            cout << "Microprocessors & Microcontrollers - 3 CH | Prerequisites: Digital Logic Design" << endl;
            cout << "Control Systems - 3 CH | Prerequisites: Signals & Systems" << endl;
            cout << "Power Systems-I - 3 CH | Prerequisites: Circuit Analysis" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 6:
            cout << "Communication Systems - 3 CH | Prerequisites: Signals & Systems" << endl;
            cout << "Instrumentation & Measurements - 3 CH | Prerequisites: Electronic Devices & Circuits" << endl;
            cout << "Power Electronics - 3 CH | Prerequisites: Power Systems-I" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 7:
            cout << "Electrical Machines - 3 CH | Prerequisites: Power Electronics" << endl;
            cout << "Renewable Energy Systems - 3 CH | Prerequisites: None" << endl;
            cout << "Final Year Project-I - 3 CH | Prerequisites: Department Approval" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 8:
            cout << "Power Systems-II - 3 CH | Prerequisites: Power Systems-I" << endl;
            cout << "High Voltage Engineering - 3 CH | Prerequisites: Electrical Machines" << endl;
            cout << "Final Year Project-II - 3 CH | Prerequisites: Final Year Project-I" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        default:
            cout << "Invalid semester choice!" << endl;
        }
    }
    else if (department == "ME" || department == "me")
    {
        switch (semester)
        {
        case 1:
            cout << "Engineering Physics - 3 CH | Prerequisites: None" << endl;
            cout << "Calculus-I - 3 CH | Prerequisites: None" << endl;
            cout << "Computer Fundamentals - 3 CH | Prerequisites: None" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 2:
            cout << "Engineering Drawing - 3 CH | Prerequisites: None" << endl;
            cout << "Calculus-II - 3 CH | Prerequisites: Calculus-I" << endl;
            cout << "Workshop Practice - 3 CH | Prerequisites: None" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 3:
            cout << "Mechanics of Materials - 3 CH | Prerequisites: Calculus-II" << endl;
            cout << "Engineering Thermodynamics - 3 CH | Prerequisites: Physics" << endl;
            cout << "Engineering Materials - 3 CH | Prerequisites: Workshop Practice" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 4:
            cout << "Fluid Mechanics - 3 CH | Prerequisites: Engineering Thermodynamics" << endl;
            cout << "Machine Design-I - 3 CH | Prerequisites: Mechanics of Materials" << endl;
            cout << "Manufacturing Processes - 3 CH | Prerequisites: Engineering Materials" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 5:
            cout << "Heat Transfer - 3 CH | Prerequisites: Fluid Mechanics" << endl;
            cout << "Theory of Machines - 3 CH | Prerequisites: Machine Design-I" << endl;
            cout << "Mechanical Vibrations - 3 CH | Prerequisites: Theory of Machines" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 6:
            cout << "Machine Design-II - 3 CH | Prerequisites: Machine Design-I" << endl;
            cout << "Industrial Engineering - 3 CH | Prerequisites: Manufacturing Processes" << endl;
            cout << "Automotive Engineering - 3 CH | Prerequisites: Machine Design-I" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 7:
            cout << "Power Plant Engineering - 3 CH | Prerequisites: Heat Transfer" << endl;
            cout << "Engineering Management - 3 CH | Prerequisites: Industrial Engineering" << endl;
            cout << "Final Year Project-I - 3 CH | Prerequisites: Department Approval" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 8:
            cout << "Refrigeration & Air Conditioning - 3 CH | Prerequisites: Heat Transfer" << endl;
            cout << "Renewable Energy Systems - 3 CH | Prerequisites: Power Plant Engineering" << endl;
            cout << "Final Year Project-II - 3 CH | Prerequisites: Final Year Project-I" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        default:
            cout << "Invalid semester choice!" << endl;
        }
    }
    else if (department == "BBA" || department == "bba")
    {
        switch (semester)
        {
        case 1:
            cout << "Principles of Management - 3 CH | Prerequisites: None" << endl;
            cout << "Business Mathematics - 3 CH | Prerequisites: None" << endl;
            cout << "Functional English - 3 CH | Prerequisites: None" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 2:
            cout << "Microeconomics - 3 CH | Prerequisites: Business Mathematics" << endl;
            cout << "Financial Accounting - 3 CH | Prerequisites: None" << endl;
            cout << "Business Communication - 3 CH | Prerequisites: Functional English" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 3:
            cout << "Macroeconomics - 3 CH | Prerequisites: Microeconomics" << endl;
            cout << "Marketing Management - 3 CH | Prerequisites: Principles of Management" << endl;
            cout << "Business Statistics - 3 CH | Prerequisites: Business Mathematics" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 4:
            cout << "Human Resource Management - 3 CH | Prerequisites: Principles of Management" << endl;
            cout << "Cost Accounting - 3 CH | Prerequisites: Financial Accounting" << endl;
            cout << "Organizational Behavior - 3 CH | Prerequisites: Business Communication" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 5:
            cout << "Financial Management - 3 CH | Prerequisites: Financial Accounting" << endl;
            cout << "Business Law - 3 CH | Prerequisites: None" << endl;
            cout << "Entrepreneurship - 3 CH | Prerequisites: Marketing Management" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 6:
            cout << "Operations Management - 3 CH | Prerequisites: Business Statistics" << endl;
            cout << "Consumer Behavior - 3 CH | Prerequisites: Marketing Management" << endl;
            cout << "E-Commerce - 3 CH | Prerequisites: Business Communication" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 7:
            cout << "Strategic Management - 3 CH | Prerequisites: Marketing + Finance" << endl;
            cout << "Taxation Management - 3 CH | Prerequisites: Cost Accounting" << endl;
            cout << "Final Year Project-I - 3 CH | Prerequisites: Department Approval" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        case 8:
            cout << "International Business - 3 CH | Prerequisites: Strategic Management" << endl;
            cout << "Investment & Portfolio Management - 3 CH | Prerequisites: Financial Management" << endl;
            cout << "Final Year Project-II - 3 CH | Prerequisites: Final Year Project-I" << endl;
            cout << "Total Credit Hours: 9" << endl;
            break;
        default:
            cout << "Invalid semester choice!" << endl;
        }
    }
    else 
        cout<<"Invalid Department Choice!";
    cout<<"Course Registration is completed.";
    return 0;
}
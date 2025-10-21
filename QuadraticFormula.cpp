#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;
    if (a == 0 && b == 0) {
        cout << "No solution." << endl;
    } else if (a == 0) {
        // Linear equation
        double root = -c / b;
        cout << "Only one root: " << root << endl;
    } else {
        double discriminant = b * b - 4 * a * c;

        if (discriminant < 0) {
            cout << "No real roots." << endl;
        } else if (discriminant == 0) {
            double root = -b / (2 * a);
            cout << "One real root: " << root << endl;
        } else {
            double root1 = (-b + sqrt(discriminant)) / (2 * a);
            double root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Two real roots: " << root1 << " and " << root2 << endl;
        }
    }
    return 0;
}







#include <iostream>
using namespace std;

int main() {
    float gpa;
    cout << "Enter your GPA (0.0 - 4.0): ";
    cin >> gpa;

    if (gpa >= 4.0) {
        cout << "Grade: A+ (Outstanding)";
    } else if (gpa >= 3.75) {
        cout << "Grade: A";
    } else if (gpa >= 3.5) {
        cout << "Grade: A-";
    } else if (gpa >= 3.25) {
        cout << "Grade: B+";
    } else if (gpa >= 3.0) {
        cout << "Grade: B";
    } else if (gpa >= 2.75) {
        cout << "Grade: B-";
    } else if (gpa >= 2.5) {
        cout << "Grade: C+";
    } else if (gpa >= 2.25) {
        cout << "Grade: C";
    } else if (gpa >= 2.0) {
        cout << "Grade: D (Pass)";
    } else {
        cout << "Grade: F (Fail)";
    }

    return 0;
}

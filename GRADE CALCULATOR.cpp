#include <iostream>
using namespace std;

int main() {
    int marks;
    char choice;

    do {
        // Prompt the user to enter marks
        cout << "Enter marks (0-100): ";
        cin >> marks;

        // Validate the input
        if (marks < 0 || marks > 100) {
            cout << "Invalid input! Please enter marks between 0 and 100.\n";
        } else {
            // Determine the grade using if-else conditions
            if (marks >= 90) {
                cout << "Grade: A\n";
            } else if (marks >= 80) {
                cout << "Grade: B\n";
            } else if (marks >= 70) {
                cout << "Grade: C\n";
            } else if (marks >= 60) {
                cout << "Grade: D\n";
            } else {
                cout << "Grade: F\n";
            }
        }

        // Ask the user if they want to calculate for another student
        cout << "Do you want to calculate grade for another student? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program terminated. Goodbye!\n";
    return 0;
}

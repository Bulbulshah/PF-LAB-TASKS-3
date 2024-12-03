#include <iostream>
#include <iomanip> // For formatting output
using namespace std;

int main() {
    int n;

    // Prompt the user to enter a positive integer
    cout << "Enter a positive integer: ";
    cin >> n;

    // Validate the input
    if (n <= 0) {
        cout << "Invalid input! Please enter a positive integer.\n";
        return 1; // Exit the program
    }

    // Display the table header
    cout << setw(6) << "Number" << setw(8) << "Square" << setw(8) << "Cube" << endl;

    // Generate and display the table using a for loop
    for (int i = 1; i <= n; i++) {
        cout << setw(6) << i << setw(8) << i * i << setw(8) << i * i * i << endl;
    }

    return 0;
}

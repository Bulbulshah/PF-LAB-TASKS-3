#include <iostream>
using namespace std;

int main() {
    int number;
   

    // Prompt the user to enter a positive integer
    cout << "Enter a positive integer: ";
    cin >> number;

    // Check if the input is valid
    if (number <= 0) {
        cout << "Invalid input! Please enter a positive integer.\n";
        
        return 1; // Exit the program
    }

    // Display the divisors
    cout << "The divisors of " << number << " are: ";

    for (int i = 1; i <= number; i++) {
        // Check if 'i' divides 'number' evenly
        if (number % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl; // End of line after displaying divisors
    
    return 0;
}

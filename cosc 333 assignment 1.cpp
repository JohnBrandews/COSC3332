#include <iostream>

using namespace std;

// Function to calculate factorial
float factorial(int n) {
    if (n < 0) {
        cout << "Factorial of a negative number is not defined." << endl;
        return -1; // Return -1 for invalid input
    }
    float  fact = 1; // Initialize result variable
    for (int i = 1; i <= n; i++) {
        fact *= i; // Multiply fact by i
    }
    return fact; // Return the factorial value
}

int main() {
    int num;
    
    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> num;
    
    // Calculate factorial
    float  result = factorial(num);
    
    // Displaying  the results
    if (result != -1) {
        cout << "Factorial of " << num << " is: " << result << endl;
    }
    
    return 0; // Indicate successful execution
}
#include <iostream>

using namespace std;

// Function to generate Fibonacci sequence up to n terms
void fibonacci(int n) {
    int first = 0, second = 1, next;// Initialize the first two Fibonacci numbers (0 and 1)
    
    cout << "Fibonacci Sequence: ";
    
    for (int i = 0; i < n; i++) {
        cout << first << " "; // Print the current term
        next = first + second; // Calculate the next term
        first = second; // Update first to the previous second
        second = next; // Update second to the new next term
    }
    cout << endl;
}

int main() {
	//declaring variable
    int num;
    
    // Ask the user for the number of terms
    cout << "Enter the number of terms: ";
    cin >> num;
    
    // Call function to generate Fibonacci sequence
    fibonacci(num);
    
   return 0;//Return 0 to indicate successful execution of the program
}
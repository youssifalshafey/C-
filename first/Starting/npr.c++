#include <iostream>

using namespace std;

// Function to calculate factorial of a number
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate nPr (permutations)
long long nPr(int n, int r) {
    if (r > n) {
        cout << "r cannot be greater than n." << endl;
        return -1;  // Return -1 in case of an invalid input
    }
    return factorial(n) / factorial(n - r);
}

int main() {
    int n, r;

    // Start an infinite loop
    while (true) {
        // Prompt user to input values for n and r
        cout << "Enter value for n (total number of items), or 0 to exit: ";
        cin >> n;
        
        // Exit condition: If n is 0, break the loop and end the program
        if (n == 0) {
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        }

        cout << "Enter value for r (number of items to arrange): ";
        cin >> r;

        // Calculate and display the result of nPr
        long long result = nPr(n, r);
        if (result != -1) {
            cout << "The number of permutations of " << r << " items from " << n << " items is: " << result << endl;
        }
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, num4;
    double average;

    // Loop infinitely
    while (true) {
        cout << "Enter four numbers to calculate the average (or type 'exit' to quit):" << endl;

        // Input four numbers
        cout << "Number 1: ";
        cin >> num1;
        cout << "Number 2: ";
        cin >> num2;
        cout << "Number 3: ";
        cin >> num3;
        cout << "Number 4: ";
        cin >> num4;

        // Calculate average
        average = (num1 + num2 + num3 + num4) / 4.0;
        
        // Output the average
        cout << "The average of the numbers is: " << average << endl;

        // Check if the user wants to exit
        string exitCommand;
        cout << "Do you want to exit? (yes/no): ";
        cin >> exitCommand;
        if (exitCommand == "yes" || exitCommand == "y") {
            break;  // Exit the loop if the user types "yes" or "y"
        }
    }

    cout << "Program exited." << endl;
    return 0;
}

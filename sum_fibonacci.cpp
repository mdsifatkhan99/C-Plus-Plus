#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Check if n is a valid input
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }

    // Initializing the first two Fibonacci numbers
    int a = 1, b = 1, sum = 0;

    // Loop to calculate the sum of the Fibonacci series
    for (int i = 1; i <= n; i++) {
        if (i == 1 || i == 2) {
            sum += 1;  // Add the first two terms
        } else {
            int nextTerm = a + b;
            sum += nextTerm;
            a = b;  // Move a and b to the next terms
            b = nextTerm;
        }
    }

    cout << "The sum of the first " << n << " terms of the Fibonacci series is: " << sum << endl;

    return 0;
}

#include <iostream>
#include<conio.h>
using namespace std;

int main() {
    int num, reversed = 0, original, remainder;

    cout << "Enter a number: ";
    cin >> num;

    original = num;  // Store the original number

    // Using for loop to reverse the number
    for (; num != 0; num /= 10) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
    }

    // Check if the original number is equal to the reversed number
    if (original == reversed){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not Palindrome" << endl;
    }
        getch();



}

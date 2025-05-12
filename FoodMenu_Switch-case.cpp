#include <iostream>
using namespace std;

int main() {
    int choice;
    int n;
    int TotallBill;

    do {

        cout << " Welcome to the Food Menu \n";
        cout << "1. Pizza - 300 Taka\n";
        cout << "2. Burger - 120 Taka\n";
        cout << "3. Pasta - 150 Taka\n";
        cout << "4. Sandwich - 80 Taka\n";
        cout << "5. Exit\n";
        cout << "Please enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "You ordered Pizza. Price: 300 Taka\n";
                cout << "Quantity : \n";
                cin >> n;
                TotallBill=300*n;
                cout <<"Your total bill : "<<TotallBill<<endl;
                break;
            case 2:
                cout << "You ordered Burger. Price:  120 Taka\n";
                cout << "Quantity : \n";
                cin >> n;
                TotallBill=120*n;
                cout <<"Your total bill : "<<TotallBill<<endl;
                break;
            case 3:
                cout << "You ordered Pasta. Price: 150 Taka\n";
                cout << "Quantity : \n";
                cin >> n;
                TotallBill=150*n;
                cout <<"Your total bill : "<<TotallBill<<endl;
                break;
            case 4:
                cout << "You ordered Sandwich. Price: 80 Taka\n";
                cout << "Quantity : \n";
                cin >> n;
                TotallBill=80*n;
                cout <<"Your total bill : "<<TotallBill<<endl;
                break;
            case 5:
                cout << "Thank you for visiting! Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please select a number between 1 and 5.\n"; 
        }

    } while (choice != 5);

    return 0;
}

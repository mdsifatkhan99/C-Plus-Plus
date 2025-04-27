#include <iostream>
using namespace std;

int main() {
    int n;
    double price, quantity;
    double total_sales = 0, total_quantity = 0;

    cout << "Enter number of items (max 100): ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Number must be between 1 and 100." << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        cout << "Enter unit price for item " << i << ": ";
        cin >> price;
        cout << "Enter quantity for item " << i << ": ";
        cin >> quantity;

        if (price < 0 || price > 1000 || quantity < 0 || quantity > 1000) {
            cout << "Values must be between 0 and 1000." << endl;
            return 0;
        }

        total_sales += price * quantity;
        total_quantity += quantity;
    }

    cout << "\nTotal sales amount: $" << total_sales << endl;
    cout << "Average sales quantity: " << (int)(total_quantity * 10 / n + 0.5) / 10.0 << endl;

    return 0;
}

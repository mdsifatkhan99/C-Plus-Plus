#include <iostream>
using namespace std;

int main()
{
    double unit;

    cout << "Enter the no. of units used: ";
    cin >> unit;

    while(unit < 0)
    {
        cout << "Invalid input. Please try again.";
        cout << "Enter the no. of units used: ";
        cin >> unit;
    }

    double totalBill = 0;

    if (unit <= 100)
    {
        totalBill += unit * 3;
    }
    else if (unit > 100 && unit <= 150)
    {
        totalBill += 100 * 3;
        totalBill += (unit - 100) * 5;
    }
    else
    {
        totalBill += 100 * 3;
        totalBill += 50 * 5;
        totalBill += (unit - 150) * 10;
    }

    cout << "Total Bill: " << totalBill << endl;
}

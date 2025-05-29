#include <iostream>
using namespace std;

int main() {
    double P, R, Amount, CI;
    int T;

    cout << "Calculate the Compound Interest :\n";
    cout << "-------------------------------------\n";

    cout << "Input the Principle: ";
    cin >> P;

    cout << "Input the Rate of Interest: ";
    cin >> R;

    cout << "Input the Time (in whole years): ";
    cin >> T;

    // Manual power calculation: (1 + R/100)^T
    double rate = 1 + R / 100;
    Amount = P;

    for (int i = 0; i < T; i++)
        {
        Amount *= rate;
        }

    CI = Amount - P;

    cout << "The Interest after compounded for the amount " << P
         << " for " << T << " years @ " << R << " % is: " << CI << endl;

    cout << "The total amount after compounded for the amount " << P
         << " for " << T << " years @ " << R << " % is: " << Amount << endl;

    return 0;
}

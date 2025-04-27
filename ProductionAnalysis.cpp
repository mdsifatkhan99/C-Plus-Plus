#include <iostream>
using namespace std;

int main()
{
    int production[6];

    cout << "Enter the production output for 6 days:" << endl;
    for (int i = 0; i < 6; i++){
        cout << "Day " << i+1 << ": ";
        cin >> production[i];
    }

    int firstThree = production[0] + production[1] + production[2];
    int lastThree = production[3] + production[4] + production[5];

    cout << "First Three Days Total Production: " << firstThree << " units" << endl;
    cout << "Last Three Days Total Production: " << lastThree << " units" << endl;

    cout << "Production Analysis: ";
    if (firstThree > lastThree){
        cout << "Production amount decreased" << endl;
    }
    else if (firstThree == lastThree){
        cout << "Steady Production" << endl;
    }
    else if (lastThree > firstThree){
        cout << "Production amount increased" << endl;
    }
}

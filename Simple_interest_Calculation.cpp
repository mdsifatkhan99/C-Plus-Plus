#include<iostream>
using namespace std;

int main ()
{
    float P, R, T, SI;

    cout<<"CALCULATE THE SIMPLE INTEREST : "<<endl;
    cout<<"Input the Principle : " <<endl;
    cin>>P;
    cout<<"Input the Rate of Interest : " <<endl;
    cin>>R;
    cout<<"Input the Time : " <<endl;
    cin>>T;

    SI=(P*R*T)/100;

    cout<<"The Sample interest for the amount "<<P<<" for "<<T<<" years "<<R<<" % is : "<<SI<<endl;

    cout << "The total amount after simple interest for the amount " << P
         << " for " << T << " years  " << R << " % is: " <<SI+P<< endl;

    return 0;
}

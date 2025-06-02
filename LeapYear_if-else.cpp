#include<iostream>
using namespace std;

int main ()
{
    int year;

    cout << "Enter a year to check leap year: "<<endl;
    cin >> year;

    if(year%100 !=0 && year%4==0 || year%400==0)
        
        cout <<year<<" is a leap year."<<endl;
        
    else
        
        cout<<year<<" is not a leap year."<<endl;
    
        return 0;

}

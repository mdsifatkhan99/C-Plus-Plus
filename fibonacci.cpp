#include<conio.h>
#include<iostream>
using namespace std;
int main()
 {
    int n;
    cout<<"Enter the number of series"<<endl;
    cin>>n;

    int fibo[n];
    fibo[0]= 0;
    fibo[1]= 1;
      cout<<fibo[0]<<endl;
      cout<<fibo[1]<<endl;
     for( int i=2; i<n; i++)
     {
         fibo[i]=fibo[i-1]+fibo[i-2];
         cout<<fibo[i]<<endl;
     }

     getch();

 }

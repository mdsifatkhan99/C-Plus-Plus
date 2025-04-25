#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
   float num;

   cout<<"ENTER number:"<<endl;
   cin>>num;

   if(num>100){

    cout<<"Invalid number"<<endl;
   }
   else if(num<0){

    cout<<"Invalid number"<<endl;
   }
   else if(num>=90){

    cout<<"A+"<<endl;
   }
  else if(num>=85){

    cout<<"A"<<endl;
   }
   else if(num>=80){

    cout<<"B+"<<endl;
   }
   else if(num>=75){

    cout<<"B"<<endl;
   }
   else if(num>=70){

    cout<<"C+"<<endl;
   }
   else if(num>=65){

    cout<<"C"<<endl;
   }
   else if(num>=60){

    cout<<"D+"<<endl;
   }
   else if(num>=50){

    cout<<"D"<<endl;
   }
   else {

    cout<<"Fail"<<endl;
   }
 return 0;

 getch ();
}

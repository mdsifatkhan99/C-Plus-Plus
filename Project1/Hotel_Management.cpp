#include<iostream>
using namespace std;

int main ()
{
    int quant;
    int choice;

    //Quantity
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;

    //food items sold
   int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;

   //Total price of items
   int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles, Total_shake=0, Total_chicken=0;

   cout<<"\t\t\t Quantity of items we have  " <<endl;
   cout<<"Rooms available : "<<endl;
   cin>>Qrooms;
   cout<<"Quantity of pasta : " <<endl;
   cin>>Qpasta;
   cout<<"Quantity of burger : " <<endl;
   cin>>Qburger;
   cout<<"Quantity of noodles : " <<endl;
   cin>>Qnoodles;
   cout<<"Quantity of shake : " <<endl;
   cin>>Qshake;
   cout<<"Quantity of chicken-roll : " <<endl;
   cin>>Qchicken;

   m:
   cout<< "\n\t\t\t Please select from the menu options ";
   cout<< "\n\n1) Rooms";
   cout<< "\n\n2 Pasta";
   cout<< "\n\n3) burger";
   cout<< "\n\n4) noodles";
   cout<< "\n\n5) shake";
   cout<< "\n\n6) chicken-roll";
   cout<< "\n\n7) Information regarding sales and collection ";
   cout<< "\n\n8) Exit";

   cout<<"\n\n\t\t\t Please Enter your choice - ";
   cin>>choice;

   switch(choice)
   {
   case 1:
         cout<<"\n\n Enter the number of rooms you want: ";
         cin>>quant;
         if(Qrooms-Srooms >=quant)
         {
             Srooms=+quant;
             Total_rooms=+quant*1200;
             cout<<"\n\n\t\t\ " <<quant<<"rooms have been alloted to you!";

         }
         else
            cout<<"\n\t Only" << Qrooms-Srooms<<"Rooms remaining in hotel " ;
         break;

  case 2:
         cout<<"\n\n Enter pasta quantity: ";
         cin>>quant;
         if(Qpasta-Spasta >=quant)
         {
             Spasta=+quant;
             Total_pasta=+quant*250;
             cout<<"\n\n\t\t\ " <<quant<<"Pasta is the order! ";

         }
         else
            cout<<"\n\t Only" << Qpasta-Spasta<<"pasta remaining in hotel " ;
         break;

  case 3:
         cout<<"\n\n Enter burger quantity: ";
         cin>>quant;
         if(Qburger-Sburger >=quant)
         {
             Sburger=+quant;
             Total_burger=+quant*150;
             cout<<"\n\n\t\t\ " <<quant<<"burger is the order! ";

         }
         else
            cout<<"\n\t Only" << Qburger-Sburger<<"burger remaining in hotel " ;
         break;

  case 4:
         cout<<"\n\n Enter noodles quantity: ";
         cin>>quant;
         if(Qnoodles-Snoodles >=quant)
         {
             Snoodles=+quant;
             Total_noodles=+quant*200;
             cout<<"\n\n\t\t\ " <<quant<<"noodles is the order! ";

         }
         else
            cout<<"\n\t Only" << Qnoodles-Snoodles<<"noodles remaining in hotel " ;
         break;

  case 5:
         cout<<"\n\n Enter shake quantity: ";
         cin>>quant;
         if(Qshake-Sshake >=quant)
         {
             Sshake=+quant;
             Total_shake=+quant*200;
             cout<<"\n\n\t\t\ " <<quant<<"shake is the order! ";

         }
         else
            cout<<"\n\t Only" << Qshake-Sshake<<"shake remaining in hotel " ;
         break;

  case 6:
         cout<<"\n\n Enter chicken-roll quantity: ";
         cin>>quant;
         if(Qchicken-Schicken >=quant)
         {
             Schicken=+quant;
             Total_chicken=+quant*200;
             cout<<"\n\n\t\t\ " <<quant<<"chicken-roll is the order! ";

         }
         else
            cout<<"\n\t Only" << Qchicken-Schicken<<"chicken-roll remaining in hotel " ;
         break;

  case 7:
         cout<<"\n\t\t\t Details of sales and collection ";
         cout<<"\n\n Number of rooms we had :" <<Qrooms;
         cout<<"\n\n Number of rooms we gave for rent : "<<Srooms;
         cout<<"\n\n remaining rooms :"<<Qrooms-Srooms;
         cout<<"\n\n Total rooms collection for the day : "<<Total_rooms;


         cout<<"\n\n Number of Pastas we had  "<<Qpasta;
         cout<<"\n\n Number of Pastas we sold :" <<Spasta;
         cout<<"\n\n remaining Pastas :"<<Qpasta-Spasta;
         cout<<"\n\n Total Pasta collection for the day : "<<Total_pasta;

         cout<<"\n\n Number of burgers we had : "<<Qburger;
         cout<<"\n\n Number of burgers we sold :" <<Sburger;
         cout<<"\n\n remaining burgers :"<<Qburger-Sburger;
         cout<<"\n\n Total burgers collection for the day : "<<Total_burger;

         cout<<"\n\n Number of noodles we had : "<<Qnoodles;
         cout<<"\n\n Number of noodles we sold :" <<Snoodles;
         cout<<"\n\n remaining noodles :"<<Qnoodles-Snoodles;
         cout<<"\n\n Total noodles collection for the day : "<<Total_noodles;

         cout<<"\n\n Number of shake we had : "<<Qshake;
         cout<<"\n\n Number of shake we sold :" <<Sshake;
         cout<<"\n\n remaining shake :"<<Qshake-Sshake;
         cout<<"\n\n Total shake collection for the day : "<<Total_shake;


         cout<<"\n\n Number of chicken-roll we had : "<<Qchicken;
         cout<<"\n\n Number of chicken-roll we sold :" <<Schicken;
         cout<<"\n\n remaining chicken-roll :"<<Qchicken-Schicken;
         cout<<"\n\n Total chicken-roll collection for the day : "<<Total_chicken;


  case 8:
         exit(0);

  default:
    cout<<"\n Please select the numbers mentioned above ! " ;


   }

   goto m ;

}

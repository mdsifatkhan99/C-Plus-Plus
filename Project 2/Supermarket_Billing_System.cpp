#include<iostream>
#include<fstream>

using namespace std;

class shopping;
{
    private:
        int pcode;
        float price;
        float dis;
        string pname;

public:
    void menu();
    void adminstrator();
    void buyer();
    void add();
    void edit();
    void rem();
    void list();
    void receipt();
};

void shopping::menu()
{
    m:
    int choice;
    string email;
    string password;

    cout << "\t\t\t\tSupermarket Main Menu" << endl;
    cout << "\t\t\t\t1. Administrator" << endl;
    cout << "\t\t\t\t2. Buyer" << endl;
    cout << "\t\t\t\t3. Exit" << endl;
    cout << "\t\t\tPlease select: "; 
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "\t\t\tPlease Login" << endl;
            cout << "Enter your Email: ";
            cin >> email;
            cout << "Password: ";
            cin >> password;

            if (email =="official.sifat99@gmail.com" && password == "Sifat@#$11223344")
            {
                adminstrator();
            }
            else
            {
                cout << "Invalid Email or Password" << endl;
            }


        case 2:
              {
                buyer();
              }
        case 3: 
              {
                exit(0);
              }
        default:
              {
                cout<< "\n Please select from the given options";
            
              }
    }  
    goto m;
} 


void shopping :: administrator()
{ 
    m:
    int choice ;
    cout << "\n\t\t\tAdmisntrator Menu ";
    cout<<"\t\t\t\n1) Add product ";
    cout<<"\t\t\t\n2) Modify product ";
    cout<<"\t\t\t\n3) Delete product ";
    cout<<"\t\t\t\n4) Back to main menu ";
    
    cout<<"\n\t\t\tPlease select: ";
    cin>> choice;

    switch (choice)
    {
        case 1:
            add ();
            break;
        case 2 :
            edit();
            break;
        case 3: 
            rem();
            break;
        case 4:
            menu();
            break;
        
        default:
            cout<< "\n Please select from the given options";
    }
    goto m;
}

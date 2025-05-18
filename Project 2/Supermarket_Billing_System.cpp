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
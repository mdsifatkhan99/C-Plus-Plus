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

void shopping :: buyer ()
{ 
    m:
    int choice;
    cout<<"\n\t\t\t Buyer Menu ";
    cout<<"\t\t\t\n1) Buy product";
    cout<<"\t\t\t\n2) Go back to main menu ";

    cout<<"\n\t\t\t Please select : ";
    cin>>choice;

    switch (choice)
    { 
        case 1: 
            receipt();
            break;
        
        case 2: 
             menu();
             
        default:
        cout<<"/n Please select from the given options";

    }
    goto m;

}

void shopping :: add()
{ 

    m:
    fstream data;
    int c;
    int token =0;
    float p;
    float d;
    string n;

    cout<< "\n\t\t\t Add new product ";

    cout<< "\n\t Product code of the product : ";
    cin>>pcode;
    cout<< "\n\n\t Product name of the product : ";
    cin>>pname;
    cout<< "\n\n\t Price of the product : ";
    cin>>price;
    cout<< "\n\n\t Discount on product : ";
    cin>>dis;



  //file handling

    data.open("database.text", ios::in);

    if(!data)
    {

        data.open("database.text", ios::app|ios::out);
        data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<endl;
        data.close();
    
    }

     else
     { 

        date>>c>>n>>p>>d;

        while(!data.eof())
        {
            if(c==pcode)
            {
                token++;

            }

            data>>c>>n>>p>>d;
        }
        data.close();
     }


     if(token==1)
     {
        goto m;
     }
     else
     {
        data.open("database.text", ios::app|ios::out);
        data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<endl;
        data.close();
     }

     cout<< "\n\n\t Record inserted ";
         
}


void shopping :: edit()
{
    fstream data, data1;
    int pkey;
    int token=0;
    int c;
    float p;
    float d;
    string n;

    cout<< "\n\t\t\t Modify the record  ";
    cout<< "\n\t Product code : ";
    cin>>pkey;

    data.open("database.text", ios::in);

    if(!data)
    { 
        cout<< "\n\n File doesn't exist ";

    }

    else 
    {

        data1.open("database1.tsxt", ios::app |ios::out);
        data>>pcode>>pname>>price>>dis; 

        while(!data.eof())
        {
            if(pkey==pcode)
            {
                cout<<"\n\t\t Product new code : ";
                cin>>c;
                cout<<"\n\t\t Name of the product : ";
                cin>>n;
                cout<<"\n\t\t Price : ";
                cin>>p;
                cout<<"\n\t\t Discount : ";
                cin>>d;
                data1<< " "<<c<<" "<<n<<" "<<p<<" "<<d<<endl;

                cout<< "\n\n\t Record edited ";

                token++;
            }

            else 
            {
                data1<< " "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<endl;

            }

            data>>pcode>>pname>>price>>dis;\

        }
        data.close();
        data1.close();

        remove("database.text");
        rename("database1.txt", "database.text");

        if(token==0)
        {
            cout<< "\n\n Sorry! Record not found. ";
        }

    }

}


void shopping :: rem()

{
    fstream data, data1;

    int pkey;
    int token=0;

    cout<< "\n\n\t Delete product ";
    cout<< "\n\n\t Product code : ";
    cin>>pkey;

    data.open("database.txt", ios::in);

    if(!data)
    {
        cout<< "\n\n File doesn't exit";

    }

    else 
    {
        data1.open("database1.tct", ios::app |ios::out);
        data>>pcode>>pname>>price>>dis;

        while(!data.eof())

        { 

            if (pcode==pkey)
            { 
                cout<<"\n\n\t product deleted successfully";
                token++;
            }

            else 
            {
                data1<< " "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<endl;
            }

            data>>pcode>>pname>>price>>dis;

        }

        data.close();
        data1.close();
        remove("database.txt");
        rename("database1.txt", "database.txt");

        if(token==0)
        {
            cout<< "\n\n\t Record not found ";
        
        }

    }

}

void shopping :: list()

{ 

    fstream data;

    data.open("database.txt", ios::in);

    cout<< "\n\n\t\t Product code\t\tProduct name\t\tPrice\t\tDiscount"<<endl;

    data>>pcode>>pname>>price>>dis;

    while(!data.eof())
    {
        cout<< "\n\n\t\t "<<pcode<<"\t\t\t"<<pname<<"\t\t\t"<<price<<"\t\t"<<dis<<endl;
        data>>pcode>>pname>>price>>dis;
    }

    data.close();
    
}







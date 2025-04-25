#include <iostream>
using namespace std;

int main(){
string Pw="Sifat123";
int key;
string pw;
cout<<"Enter your password: "<<endl;
cin>>pw;
if(Pw==pw){
    cout<<"welcome!if you need anything more press 1 : "<<endl;
   cin>>key;
    if(key==1){
     cout<<"contact:official.sifat99@gmail.com"<<endl;
        }
    else {
        cout<<"Invalid!"<<endl;
    }
}
else{
    cout<<"Wrong password! "<<endl;
}
return 0;
}

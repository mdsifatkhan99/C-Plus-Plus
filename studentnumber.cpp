#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter the number of students:"<<endl;
    cin>>number;

    int sum, students[number];

    for(int i=0; i<number; i++)
    {   cout<<"marks for student "<<i+1<<" = ";
        cin>> students[i];
        sum+=students[i];
    }

cout<<"Total marks:"<<sum<<endl;

float Avg= (float)sum/number;
cout<<"Average :"<<Avg<<endl;

return 0;

}

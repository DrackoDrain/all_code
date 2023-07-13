// Nested - if statement 

#include<iostream>
using namespace std;
int main()
{
    int i=10;

    if(i==10)
    {
        cout<<" I is equal"<<endl;
    }
    // Nested if statement will only be executed if statement above is true 
    if(i<12)
    {
        cout<<" i is smalller than 12"<<endl;
    }
    else
    {
        cout<<"I is greater then 10";
    }
}
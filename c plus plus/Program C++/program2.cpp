// using non-parameterized manipulators (ws)

#include<iostream>
using namespace std;
#include<iomanip>
#include<string.h>
int main()
{
    char name[100];
    cout<<"Enter your name "<<endl;
    cin>>ws;
    cin.getline(name,100);
    cout<<name<<endl;
    return 0;
}

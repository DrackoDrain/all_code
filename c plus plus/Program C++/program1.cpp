//  Write a program to using manipulators in c++

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   /* int a=10;
       int b=20;
    double A=3.15673;
    char g;
    */
    int a=100;
   /* cout<< setw(5)<<a<<setw(5)<<b<<endl;
    cout<<fixed<<endl;
    cout<<setprecision(12)<<endl;
    cout<<setfill('*')<<endl;
    cout<<setw(5)<<g<<endl;
    cout<<hex<<a<<endl; 
    */
    cout<<setbase(8)<<a<<endl;
}

#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
    double float_value=3.133545;
    cout<<setprecision(4)<< float_value<< endl;
    cout<< fixed;
    cout<<setprecision(14)<< float_value<< endl;
}
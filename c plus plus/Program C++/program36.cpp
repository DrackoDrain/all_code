// check whether number is odd or even using function 


/*
n&1 performing a binary AND between n and 1. 
if (n&1) is checking for whether a number is odd, since odd numbers will have LSB of 1 and even numbers don't.
*/

#include<iostream>
using namespace std;

bool isEven(int a)
{
    if(a&1)
    {
        return 0; //  if return 0 then the number will be odd 
    }
    return 1;  // if return 1 then the number will be even. 
}
int main()
{
    int a;
    cout<<" Enter the value you want to check wether the value is even or odd";
    cin>> a;
    if(isEven(a))  // if (isEven(1))   0=odd; coz odd number will have LSB of 1;
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd ";
    }

}
// convert binary number into decimal numebers

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int ans=0,i=0;
    int n;
    cin>>n;
    while(n!=0)
    {
        int digit = n%10;
        if(digit == 1)
        {
            ans = ans + pow(2,i); 
        }
        n=n/10;
        i++;
    }
    cout<<" Decimal number = "<< ans;
}
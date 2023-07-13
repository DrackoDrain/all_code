// Convert any decimal number into binary number

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n>0)
    {
        int bit = n&1;
        ans= bit*(pow(10,i))+ans;
        i++;
        n=n>>1;
    }
    cout<<" Binary Number = " << ans ;

}
/* it will not apply on large integers number because int range = 2 to the power 31 'to' 2 to the power 31 -1*/
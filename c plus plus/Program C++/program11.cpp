// Print 1 to 10 using Goto statement 
// Not solved 

#include<iostream>
using namespace std;

int PrintNumbers(int i)
{
   START : 
   if(i<=10)
    cout << i << endl;
    i=i+1;
    goto START;
    return 0;
}

int main()
{
     int i=1;
    PrintNumbers(i);
}
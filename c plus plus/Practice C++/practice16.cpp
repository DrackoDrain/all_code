// Not solved 
//leetcode 1281
// not solved 

#include<iostream>
using namespace std;
int n;
int p=0;
int prod=1;
 int sum()
    {
       cin>>n;
        while(n>0)
        {
        n=n%10;
        p=p+n;
        n=n/10;
        }
        return 0;  
    }

int product()
{
    cin>>n;
    while(n>0)
    {
        n=n%10;
        prod=n*prod;
        n=n/10;
    }
    return 0;
}

int diff()
{
    int x=prod-p;
   cout<<" diff = "<< x;
   return 0;

}

int main()
{
    int prod=1,p=0,x;
  
    sum();
    prod= product();
    x=diff();
    cout<<"Product of a number and sum of its digits is ="<< x;

}
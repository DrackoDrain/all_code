// Factorial of a number //

#include<iostream>
using namespace std;
int main()
{
    int i,fact=1,n;
    cout<<"Enter the number you want to get factorial of it";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"fact="<<fact;
}

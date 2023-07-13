// square of any number using function 
// Like a=4 and b=2 and then we will get 16


#include<iostream>
using namespace std;

int power(int num1, int num2)
{
    int ans = 1;

    for(int i=1;i<=num2;i++)
    {
      ans = ans*num1;
    }
    return ans;
}

int main()
{
    int a,b,result;
    cout<<"Enter the value of a and b ";
    cin>>a>>b;
    result=power(a,b);
    cout<<"Answer = "<<result;
}



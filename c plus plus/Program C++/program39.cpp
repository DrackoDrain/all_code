// Call by Value 
// Function 

#include<iostream>
using namespace std;
int add(int a, int b);

int main()
{
    int a;
    int b;
    cout<<" Enter the value of a and b";

    // a = 4; b=5;
    cin>> a >> b;


    cout << " Value of a and b before function call " << (a+b) << endl; 
    // It will print 9

    add(a,b); 
    // it will print 10 coz it will go to function definition body 

    cout << " Value of a and b after function call " << (a+b) << endl;
    // It will print 9 coz value of previous (a+b)=10 will only for that function coz i didn't return that value from function. If i return that value "return (a+b)" then it will print 10 also 
}

int add(int a, int b)
{
    cout << " Value of a and b while calling function  " << (a+b+1) << endl;
    return (a+b+1);
}

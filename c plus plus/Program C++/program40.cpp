// Program that uses call-by-address method to pass argument to the called function 

#include<iostream>
using namespace std;
int  add(int *p );

int main()
{
    int n = 2;
    cout << " The value of num before calling the function " << n << endl;
    add( &n);

    cout << " The value of num after calling the function " << n << endl;
    return 0;

}
int  add ( int *p )
{
    *p = *p+10;
    cout << " The value of num in the called function " << *p<< endl;
    return *p;
}
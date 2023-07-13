// Prime number 

#include<iostream>
using namespace std;

int main()
{
    int flag = 0, n;
    cout << " enter the number to check prime ";
    cin >> n;
    for (int i = 2; i < n ; i++ ){
        if ( n%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0 ){
        cout << " Number is prime " << n ;
    }
    else{
        cout << " NUmber is not prime " ;
    }
}
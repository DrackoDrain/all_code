// Using of Setprecision and Setw 


#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
        int a = 54;
        double b = 3.567890;

        // std ::
         cout << " set(w) = " << setw(5) << a << endl;
       // std :: 
        cout << " set(precision) = " << setprecision(3) << b << endl;

}
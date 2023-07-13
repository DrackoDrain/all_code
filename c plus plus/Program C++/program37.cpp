// Find the value of nCr 

#include<iostream>
using namespace std;

int Fact(int n)  // third step 
{
    int Fact=1;
    for(int i=1;i<=n;i++)
    {
        Fact=Fact*i;
    }
    return Fact;    // Fourth step 
} 
int nCr(int n, int r ) 
{  
    int num=Fact(n); // second step 
    int denom=Fact(r)*Fact(n-r); 
    return num/denom; 
} 
int main() 
{ 
    int n,r; 
    cout<<" Enter the value of n and r "; 
    cin >> n >> r; 
    cout<< "Answer =" << nCr(n,r) << endl;  // First step 
} 
 
// To calculate the average of first n numbers 

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;

    int i=1;
    int sum = 0;
   float avg = 0.0000;
    cout<<" Enter the value of n (how many numbers,you want to get average of)";
    cin>>n;

    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    avg = sum/n;
    cout << " The sum of first n numbers " << sum << endl;
    cout << " The average of first n numbers " << avg ;

}
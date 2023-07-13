// Count of setbits 
/*

#include<iostream>
using namespace std;

int setBits(int n)
{
    int count = 0;
    while(n!=0)
    {
        int remainder = n%2;
        if(remainder == 1)
        {
            count++;
        }
        n=n/2;
    }
    return count;
}
int main()
{
    int n;
    cout<<" Enter the value of n";
    cin>>n;
    cout<< "Numbers of setbits = " << setBits(n) << endl;
}

*/

// C++ program to Count set
// bits in an integer
#include <bits/stdc++.h>
using namespace std;

/* Function to get no of set bits in binary
representation of positive integer n */
unsigned int countSetBits(unsigned int n)
{
	unsigned int count = 0;
	while (n) {
		count += (n & 1); // count = n&1;
                          //   count++; 
		n >>= 1;
	}
	return count;
}

/* Program to test function countSetBits */
int main()
{
    int i;
	cout<<" Enter the value of i";
    cin>>i;
	cout << countSetBits(i);
	return 0;
}

// This code is contributed
// by Akanksha Rai

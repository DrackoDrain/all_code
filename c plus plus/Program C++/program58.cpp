// const keyword 

#include<iostream>
using namespace std;

int main()
{
    int x{10};
    char y{'A'};

    const int *i =&x;
    const char *j =&y;

    x=15;
    y='B';
    cout << " *i = " << *i << endl << " *j = " << *j << endl;

}
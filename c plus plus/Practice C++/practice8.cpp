// Inline function 

#include<iostream>
using namespace std;
inline int cube(int s);
int main()
{
    cout<<"Cube="<<cube(3)<<endl;
}
inline int cube(int s)
{
    return s*s*s;
}
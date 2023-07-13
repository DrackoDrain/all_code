// Encapsulation in C++
// Write a program to demonstrate to Encapsulation 

#include<iostream>
using namespace std;

class Encapsulation{
    private :
    int x;

    public:

    void set ( int a ){
        x=a;
    }
    int get(){
        return x;
    }

};
int main()
{
    Encapsulation enc;
    enc.set(50);
    cout << enc.get();
    return 0;
}
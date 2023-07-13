// Class And Objects 
// C++ program to demonstrate accessing data members

#include<iostream>
using namespace std;

class Hero{
    public:
    string name;
    void printName()
    {
        cout << "  The Name is " << name << endl;
    }
};

int main()
{
   Hero h1;
   h1.name = " Ayush Aryan ";
   h1.printName();
   return 0;
}
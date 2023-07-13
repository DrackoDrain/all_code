#include<iostream>
using namespace std;

class Hero
{
    public:

    int health;
    char name[10];
};

int main()
{
    Hero h1;

    cout <<" Size of " << sizeof(h1.name) << endl;
}
// Destuctor in c++

#include<iostream>
using namespace std;

class Hero{
    public:
    int level;
    char health;

    ~Hero(){ //automatically called 
        cout <<" destructor is called " << endl;
    }
};

int main()
{
    Hero a;
    a.level=50;
    a.health='b';
    cout << a.health << endl;
    a.Hero::~Hero(); // Manually called 
}
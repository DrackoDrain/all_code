// Write a program to use Getter and Setter 

#include<iostream>
using namespace std;

class Hero {
    private :
    int health;
    char level;
    
    public:
    int gethealth(){
        return health;
    }
    int getlevel(){
        return level;
    }
    void sethealth( int h)
    {
        health = h;
    }
    void setlevel( char l)
    {
        level = l;
    }
};

int main()
{
    Hero h1;
    h1.sethealth(90);
    cout << " h1 health is " << h1.gethealth() << endl;
    h1.setlevel ('A');
    cout << " h1 level is " << h1.getlevel() << endl;
   
}
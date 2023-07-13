// Example on Parameterized Constructor

#include<iostream>
using namespace std;

class Hero{
    private :
    int health;

    public :
    char level;

    Hero(char level)
    {
        this->level=level;    // level = l;  (char l)
    }

    void print()
    {
        cout <<"level ="<< level << endl;
        cout << "health =" << health << endl;
    }
    int gethealth()
    {
        return health;
    } 
    void sethealth(int h)
    {
        health = h;
    }
    Hero(int health, char level)
    {
        this -> health = health ;
        this -> level = level ;
    }
};

int main()
{
    Hero h1('A');
   
    h1.sethealth(20);

     h1.print();

     Hero *P = new Hero(11,'A'); // line no 31 to 35 connected to line 48 to 49 
     P->print();

     Hero temp(50, 'B');
     temp.print();
}
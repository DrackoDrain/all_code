// Use of parameterized constructor and copy constructor in One Program 

#include<iostream>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;
   
    // int gethealth()
    // {
    //     return health;
    // }

    // void sethealth(int h)
    // {
    //     health=h;
    // }
  
    // Hero(char level)
    // {
    //     this->level=level;
    // }

    Hero(int health, char level)
    {
        this->health=health;
        this->level=level;
    }

    void print()
    {
        cout << " Level =" << level << endl;
        cout << " Health = " << health << endl;
    }
};

int main()
{
   
    Hero Ramesh(65,'A');
    
    Ramesh.print();
    
    // Hero Kit(100,'B');
    // cout << endl <<" Kit is printing "<< endl;
    // Kit.print();

    // Hero *A = new Hero(100,'A');
    // cout <<endl<< " A is printing" << endl;
    // A->print();     

    Hero Suresh(Ramesh);
    cout << endl << " Suresh is printing " << endl;
    Suresh.print();

}
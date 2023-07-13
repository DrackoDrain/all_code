// Parameterized Contructor and Copy Constructor 

#include<iostream>
using namespace std;
class Hero
{
    public:
    int health;
    char level;

    Hero(){
        cout << " simple constructor called " << endl;
    }

    // parameterized constructor 

    Hero(int health, char level)
    {
      
        this->health = health;
        this->level = level;

    }
     
     void print()
     {
        cout << level << "\t" << health << endl;
        
      //  cout << " Health is=" << this->health << endl;
        // cout << "Level is=" << this->level << endl;
       
     }

};

int main()
{
    Hero ramesh(60,'D');

    Hero suresh(ramesh); // copy consturctor 
  //  ramesh.health=50;
  //  ramesh.level='C';
    ramesh.print();
    suresh.print();

   /*  Hero h(100,'A');
     h.print();

    Hero temp(156,'B');
    temp.print(); */
 
}
// Use of Getter and Setter 
// static keyword 
// Destructor 
// Static Function 

#include<iostream>
using namespace std;

class Hero
{
    private :
    int health;
    char level;
    
     public:
     static int timetocomplete;  // declaring static data member

     int gethealth()
     {
        return health;
     }

     int getlevel()
     {
        return level;
     }

     void setlevel(int l)
     {
        level = l;
     }

     void sethealth(int h)
     {
        health = h;
     }

     static int random () {           // static Function 
      return timetocomplete;
     }

     ~Hero()
     {
      cout << " Destructor is called " << endl;
     }
};

int Hero :: timetocomplete = 10;  // initilizing data member 
int main()
{
   cout << Hero::random() << endl;    // static function called 
   cout << "time to complete = " << Hero::timetocomplete << endl; // static member called 
    Hero a;
    a.sethealth(50);
    a.setlevel('A');
    cout << " Health of Hero is " << a.gethealth() << endl;
   cout << " Level of Hero is " << a.getlevel() << endl;


       // Manually destructor called 
      Hero *b = new Hero();
       delete b;
   
       // Manually Called destructor 
       a.Hero :: ~Hero();
}
// Inheritence 
// Base class is protected and it is derived in public mode


#include <iostream> 
using namespace std;

class Human{
    protected :
    int health ;

};

class Male : public Human{
    public:
    int level;

    int gethealth(){
        return this-> health;
    }
    void sethealth(int h){
        health = h;
    }

};

int main()
{
    Male m1;
    m1.sethealth(69);

    cout << " health is accessed in protected way = " << m1.gethealth() << endl;
  
}
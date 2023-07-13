// Inheritence 
// base class -> public and it is derived in protected mode

#include <iostream> 
using namespace std;

class Human{
    public:
    int health ;

};

class Male : protected Human{
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
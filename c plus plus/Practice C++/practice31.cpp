//  Simple Inheritence Program 

#include<iostream>
using namespace std;

class Human{    
    public :
    int health;
    int level;
};

class Male : public Human{
   public:

    int color;
    int growth;
    
    public:

    int gethealth(){
        return this-> health;
    }
};

int main()
{
    Male m1;

    cout << m1.color << endl;
    cout << m1.growth << endl;
    cout << m1.gethealth() << endl;
    cout << m1.level << endl;
}
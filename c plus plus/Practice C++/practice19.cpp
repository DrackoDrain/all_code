// Use of Getter and Setter 

#include<iostream>
using namespace std;

class Aryan 
{
    private:

    int health; 
    char level;

    public: 

    int gethealth()
    {
        return health;
    }

    char getlevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health=h;
    }
    void setlevel(char ch)
    {
        level=ch;
    }

};

int main()
{
    Aryan abc;
    abc.sethealth(80);
     cout << " Health of Aryan " << abc.gethealth() << endl;
     abc.setlevel('A');
     cout<< " Level of Aryan is " << abc.getlevel() << endl;
    
}
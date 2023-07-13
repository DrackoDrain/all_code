// Normal using of Class and Objects 

#include<iostream>
using namespace std;

class Ayush {
    private :

    int health;
    char level; 
  

    public :

    int gethealth(){
         return health;
    }

    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health=h;
    }

    void setlevel(char l){
        level=l;
    }
    void print(){
        cout << " printing ********** " << endl;
        cout << " Level is = " << level;
        cout << " Health is =" << health;

    }

};

int main()
{
    Ayush h1;
    h1.sethealth(90);
    h1.setlevel('A');
    cout << " Health is  = " << h1.gethealth();
    cout << endl << " Level is  = " << h1.getlevel();
   //  h1.print();
}
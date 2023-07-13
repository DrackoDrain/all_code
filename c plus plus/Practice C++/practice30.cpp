// Inheritence in protected way 

#include<iostream>
using namespace std;

class Human {
    public:
    int height;
};

class Male : protected Human {
    public:
    int color;
    string name;
    int getheight() // A class derived in protected mode publioc memebers will be  protected thats why i used getter and setter //
    {
        return this->height;
    }
    void setheight(int h){
        height = h;
        
    }
};

int main()
{
    Male m1;
    m1.setheight(30);
   
    cout << m1.getheight() << endl;
}
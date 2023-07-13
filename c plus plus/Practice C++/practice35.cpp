// Inheritence 
// Multi - level inheritence 


#include<iostream>
using namespace std;

class Animal {
    public:

    int age;
    int weight;
    
     public:

     void speak(){
        cout << " Speaking " << endl;
     }

};

class dog : public Animal{ 

};

class GermanShephard : public dog{

};

int main()
{
    GermanShephard G;
G.speak();
}
 
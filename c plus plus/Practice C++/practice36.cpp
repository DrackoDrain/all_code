// Inheritence 
// Multiple Inheritence 

#include<iostream>
using namespace std;

class Human {
    public:

    int age;
    int weight;
    
     public:

     void speak(){
        cout << " Speaking " << endl;
     }
};

class Animal{
    public :
    string color;

    public:
    void bark(){
        cout << " Barking " << endl;
    }
};

// Multiple Inheritence 
class Hybrid : public Human , public Animal {

};

int main()
{
    Hybrid h1;
    h1.speak();
    h1.bark();
}
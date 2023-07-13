// Defining the constructor outside the class 

#include<iostream>
using namespace std;

class Hero{
    int rno;
    char name[10];
    double fees;

    public:

    Hero();
    int display();
};

Hero :: Hero()  // class name with constructor
{
    cout << " Enter the roll number " << endl;
    cin >> rno;
    cout << " Enter the name " << endl;
    cin >> name;
    cout << " Enter the fees " << endl;
    cin >> fees ;
}

int Hero :: display()
{
    cout << endl << rno << "\t" << name << "\t " << fees;
    return 0;
}

int main()
{
    Hero h1; // Constructor gets called automatically when we create object 
    h1.display();
    return 0;
}

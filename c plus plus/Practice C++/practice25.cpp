// static data member in c++

#include<iostream>
using namespace std;

class Ayush{
    public:

    int health;
    char level;
    static int timetocomplete;

};
int Ayush :: timetocomplete=10;

int main(){
    cout << Ayush::timetocomplete << endl;
}


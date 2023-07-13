// static function in c++


#include<iostream>
using namespace std;
class Ayush{
    public:
    static int timetocomplete;
    static int aryan()
    {
        return timetocomplete;
    }
};

int Ayush :: timetocomplete=10;

int main()
{
    cout << Ayush::aryan() << endl;
}

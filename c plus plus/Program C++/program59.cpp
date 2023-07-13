// Initilizer in C++

#include<iostream>
using namespace std;
class point{
    private:
    int x;
    int y;
    public:
    point(int i=0 , int j=0) : x(i),y(j){}
    int getx() const {return x;}
    int gety() const {return y;}
};

int main()
{
    point t1(10,15);
    cout << "x= " << t1.getx()<< endl;
    cout << "y= " << t1.gety() << endl;
}
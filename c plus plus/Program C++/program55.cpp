// Initialize data member of the class through parameterized constructor 

#include<iostream>
using namespace std;
class Numbers
{
private:
 int x;
public:
    Numbers(int i){
      //  x=i;
      this->x = i;
    }
 
  void print(){
    cout << " \n x= "<<x;
  }
};

int main()
{
    Numbers N(20);
    N.print();
}
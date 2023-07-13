// Defining the constructor within the class 

#include<iostream>
using namespace std;

class Student{
    private:
    int rno;
    char name[50];
    double fees;

    public:
    Student()   // constructor call 
    {
        cout << " Enter the Roll number " << endl;
        cin >> rno;
        cout << " Enter the name of the student " << endl;
        cin >> name;
        cout << " Enter the fees that student will submit "<< endl;
        cin >> fees;

    }
    void display()
    {
     cout << endl << rno << "\t " << name << "\t" << fees << endl;
       
    }
};

int main()
{
  Student ayush;
    // s.student();
   // s.display();
   ayush.display();
    return 0;
}
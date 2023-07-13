/*
1
23
456
78910
*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,rows,number=1;
    cout<<" Enter the number of rows ";
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<number<<" ";
          number++;
        }
        cout<<endl;
    }

}
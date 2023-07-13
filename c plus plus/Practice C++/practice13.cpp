/* 
1
21
321
4321
*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the number of rows ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i-j+1;
        }
        cout<<endl;
    }
    return 0;
}
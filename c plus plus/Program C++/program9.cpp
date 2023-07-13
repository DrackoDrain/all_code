//  usuage of break statement 

#include<iostream>
using namespace std;
void findElement(int arr[], int n, int key)
{
    for(int i =0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<" Element Found at "<<(i+1)<<endl;
            break;
        }
    }
}
int main()
{
    int arr[] ={1,2,3,4,5,6};
    int n=6;
    int key=3;
    findElement(arr,n,key);
    return 0;
}
 
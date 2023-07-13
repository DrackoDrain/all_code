// find a number in array 

#include<iostream>
using namespace std;
int findElement();
int arr[10],key,n,i;
int main()
{
    cout<<"enter the size of an array";
    cin>>n;
    cout<<"enter the number in array ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i]; 
    }
    cout<<"Enter the number you want to find ";
    cin>>key;
    findElement();
   
}
int findElement()
{
   
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Element found at "<<i<<endl;
        }
    }
    cout<<"Number not Found ";
    return 0;
}
// Swap Alternate 

#include<iostream>
using namespace std;

void SwapAlternate(int arr[], int n){
    for(int i=0;i<n;i+=2){
        if(i+1 < n){
        swap(arr[i],arr[i+1]);
        }
    }
}

void PrintArray(int arr[], int n){
    for(int i=0;i<n;i++)
    {
            cout<< arr[i] << " ";
        
    }
    cout<< endl;
}


int main()
{
    int even[6] = {2,45,56,34,23,12};
    int odd[5] = {32,45,657,85,2};
    SwapAlternate(even,6);
    PrintArray(even,6);

    cout<< endl;

    SwapAlternate(odd,5);
    PrintArray(odd,5);



}
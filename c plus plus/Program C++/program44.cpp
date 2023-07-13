// Find the Maximum and Minimum number in an Array 

#include<iostream>
using namespace std;

int GetMax(int arr[], int n)
{
    int maxi;
   for(int i=0;i<n;i++){
    maxi=max(maxi,arr[i]);
   }
   return maxi;
}

int GetMin(int arr[], int n){
    int mini;
    for(int i=0;i<n;i++){
        mini=min(mini,arr[i]);
    }
    return mini;
}

int main()
{
    int size;
    cin >> size;
    int arr[100];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << " Maximum Number in an Array " << GetMax(arr,size);
    cout << " \n Minimum Number in an Array " << GetMin (arr,size);

}

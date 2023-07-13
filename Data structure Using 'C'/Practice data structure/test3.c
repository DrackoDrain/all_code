// fibonacci series using function recursion 
#include<stdio.h>   
int n1=0,n2=1,n3;   
void printFibonacci(int n)
{  
    if(n>0)
    {    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         printf("%d ",n3);  
         printFibonacci(n-1);        
    }    
}    
void main(){    
    int n;    
    printf("Enter the number of elements: ");    
    scanf("%d",&n);    
    printf("Fibonacci Series: ");    
    printf("%d %d",0,1);
    printFibonacci(n-2);  
 }    
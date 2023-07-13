// Write a progarm to find vowels in string using character array //

#include<stdio.h>
void main()
{
    char x[20];
    int a,e,i,o,u,l=0;
    printf("enter a string");
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
        l=l+1;
    }
    printf("vowels=%d",l);
}

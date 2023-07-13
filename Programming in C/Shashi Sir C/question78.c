// Write a program using files to write a set text message in a file and also display the same message.//

#include<stdio.h>
void main()
{
    FILE *fp;
    char c;
    printf("writing into file \n ");
    fp=fopen ("ayush.txt","w");
    while((c=getchar())!=EOF)
    {
        putc(c,fp);
    }
    fclose(fp);
    printf("\n Reading from the file");
    fp=fopen ("ayush.txt","r");
    while((c=getc(fp))!=EOF)
    {
        printf("%c",c);
    }
    fclose(fp);
    getch();

}
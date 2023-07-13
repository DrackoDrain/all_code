 #include<stdio.h>
 void main()
 {
     float math,english,physics,biology,chemistry,total,percentage;
     printf("enter the marks of maths");
     scanf("%f",&math);
     printf("enter the marks of english ");
     scanf("%f",&english);
     printf("enter the marks of physics");
     scanf("%f",&physics);
     printf("enter the marks of chemistry ");
     scanf("%f",&chemistry);
     printf("enter the marks of biology");
     scanf("%f",&biology);
     total=math+english+physics+biology+chemistry;
     percentage=total/5;
     printf("\n toatl=%f",total);
     printf("\n percentage=%f",percentage);

 }
////////////////// union datatype ///////////////
#include<stdio.h>
#include<conio.h>
#include<string.h>
  union student{
        char name[20];
        int rollno;
        float mark;
    }s1;
void main(){
   printf("\n%d",sizeof(s1));
    union student s2;
    printf("\n%d",sizeof(s2));
    printf("enter your name \n");
    scanf("%s",&s1.name);
     printf("\ns1.name:%s\nenter your rollno:\n",s1.name);
    scanf("%d",&s1.rollno);
    printf("rollno:%d\nenter your mark\n",s1.rollno);
    scanf("%f",&s1.mark);
    printf("mark:%f",s1.mark);
}
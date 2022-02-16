////////////////////// struct datatypes //////////////////
#include<stdio.h>
#include<conio.h>
#include<string.h>
 struct student{
        char name[20];
        int mark;
    };

void fun1(char[],int);
void fun2(struct student);
void fun3(struct student*);
struct student createstr(char[],int);
struct student* pcreatestr(char[],int);
void main(){
   
     struct student s1={"srinivasan",100},s2;
    printf("%d",sizeof(s1));
    printf("\n%s:%d",s1.name,s1.mark);
    fun1(s1.name,s1.mark);
    fun2(s1);
    struct student *p;
    p=&s1;
    printf("\n%s",p->name);
    fun3(p);
    s2=createstr("srinivasan",100);
    printf("\n%s--->%d",s2.name,s2.mark);
    p=pcreatestr("srinivasan",100);
    printf("\n%s--->%d",p->name,p->mark);

}


void fun1(char a[],int b){
  printf("\n%s->%d",a,b);
}

void fun2(struct student s){
  printf("\n%s=>%d",s.name,s.mark);
}

void fun3(struct student* p){
  printf("\n%s:::%d",p->name,p->mark);
}

struct student createstr(char a[],int b){
  struct student s;
  strcpy(s.name,a);
  s.mark=b;
  return s;
}
struct student* pcreatestr(char name[],int mark){
 static struct student s;
  struct student *p;
   strcpy(s.name,name);
   s.mark=mark;
   p=&s;
   return p;
 }
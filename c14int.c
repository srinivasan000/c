////////////////// int datatypes /////////////////////
#include<stdio.h>
#include<conio.h>
int input();
void line(int);
int add(int, int);
int fun1(int *p);
int* fun2(int);
void main(){
    int a, b;
    int *p;
    line(20);
    a=input();
    b=input();
    printf("\n%d + %d = %d\n",a,b, add(a, b));
    line(20);
    p=&a;
    a=fun1(p);
    printf("\n%d", a);
    p = fun2(a);
    printf("\n%d\n", *p);
    line(20);
    getch();
}
int input(){
    int a;
    printf("\nenter a number:\t");
    scanf("%d",&a);
    return a;
}
void line(int a){
    int i;
    for (i = 0; i <= a;i++){
        printf("-");
    }
}
int add(int a ,int b){
    return a + b;
}
int fun1(int *p){
    return ++(*p);
}
int* fun2(int a){
      int *p;
      static int b;
      b = a + 1;
      p = &b;
      return p;
}
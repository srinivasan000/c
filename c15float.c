////////////////////////// float datatypes ////////////////////////
#include<stdio.h>
#include<conio.h>
float input();
void line(float);
float add(float,float);
float fun1(float *p);
float* fun2(float);

void main(){
float a,b,c;
float *p;
a = input();
 line(a);
b = input();
c = input();
printf("\n%f + %f = %f\n",b,c,add(b,c));
line(a);
p = &b;
b = fun1(p);
printf("\n%f", b);
p = fun2(b);
printf("\n%f", *p);
getch();
}

float input(){
    float a;
    printf("\nenter a number");
    scanf("%f", &a);
    return a;
}

void line(float a){
    printf("\n");
    int i;
    for (i = 0; i < a;i++){
        printf("-");
    }
}

float add(float a,float b){
    return a + b;
}

float fun1(float *p){
    float a;
    a=*p+1;
    return a;
}

float* fun2(float a){
    float *p;
    static float b;
    b = a + 1;
    p = &b;
    return p;
}
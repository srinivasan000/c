/////////////////////// enum datatypes /////////////////////
//integer constant
#include<stdio.h>
#include<conio.h>
void main(){
    enum name{a=4,b,c,d,e,f};
    enum name no1,no2;
    no1 = a;
    no2 = b;
    printf("%d,%d\n", no1,no2);//4,5
}

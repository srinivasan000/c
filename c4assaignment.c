///////////////////// assaignment operator /////////////////
/* =,+=,-,*=,/=,%=   */
#include<stdio.h>
#include<conio.h>
void main(){
    int num1,num2;
    char ch;
    char name[10];
    num1 = 5; //assaign num1 value
    printf("\nnum1=%d", num1);
    printf("\nenter num2 :");
    scanf("%d", &num2); //assaign num2 value  from user input 
    printf("\n num2=%d", num2);
    printf("\nenter charactor:");
    getchar();
    ch=getchar();//ssaign ch value from user input
    putchar(ch);
    printf("\nenter your name:");
    gets(name);
    gets(name);//assaign name value
    puts(name);
    num1 += 5; //num1=num1+5;10
    printf("\n num 1=%d", num1);
    num1 -= 5; //num1=num1-5;5
    printf("\n num1=%d", num1);
    num1 *= 2; //num1=num1*5;10
    printf("\nnum1=%d", num1);
    num1 /= 2; //num1=num1/2;5
    printf("\nnum1=%d", num1);
    num1 %= 4; //num1=num1%4;1
    printf("\nnum1=%d", num1);
    getch();
}
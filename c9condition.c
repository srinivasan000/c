///////////////////////// conditional statements /////////////////
// if,else if,else,ternary operation
#include<stdio.h>
#include<conio.h>
void main(){
    int num1=50, num2;
    printf("\nenter a number:");
    scanf("%d", &num2);
    // if , else , else if 
    if(num1>num2){
        printf("\n%d is small", num2);
    }
    else if(num1<num2){
        printf("\n%d is big", num2);
    }
    else{
        printf("\n%d is equal", num2);
    }
    //ternary operation
    (num1 > num2) ? printf("\n%d is small", num2):(num1 < num2)?printf("\n%d is big",num2):(num1 == num2)?printf("\n%d is equal"):printf("s");
    getch();
}
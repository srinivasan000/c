////////////////// arithmatic operator /////////////////
/* ++,--,*,/,%,+,-   */
#include <stdio.h>
#include<conio.h>
int main(){
    int a = 5;
    printf("\n a=%d", a); //5
    printf("\n pre-increment a=%d", ++a); //6
    printf("\npost-increment a=%d", a++);  //6
    printf("\n a=%d", a);  //7
    printf("\n pre-decrement a=%d", --a); //6
    printf("\npost-decrement a=%d", a--); //6
    printf("\n a=%d", a); //5
    
    getch();
    return 0;
}
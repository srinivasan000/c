/*
variable is named memory location and stored data value.
datatype identifier = value;
*/
#include<stdio.h>
#include<conio.h>
#define name "srinivasan"
int global;
void main(){
    int a, b;
    char c = 's';
    float d;
    printf("\nname  %s", name);
    printf("\nchar is '%c'", c);
    global = 5;
    a= 5;
    b = 5;
    d = 5.5;
    printf("\nglobal %d", global+5);
    printf("\n%0.1f", a + d);//implecit type casting
    printf("\n%0.2f", (float)a + b);//explicit type casting
    getch();
}
/*
escape charactor
\n-newline
\t - horyzontal tab
\b - back space
\v - vertical tab
\" - double quote
\' - single quote
\\ - back slash
\0 - null
*/
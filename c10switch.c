/////////////////// switch case //////////////////////////
// switch(case){case "value"://code; //break; default://code;}
#include<stdio.h>
#include<conio.h>
void main(){
    double num1, num2;
    char calc;
    printf("\nenter operation :\n");
    scanf("%c", &calc);
    printf("enter 2 numbers use only space:\n");
    scanf("%lf %lf", &num1, &num2);
    switch(calc){
        case '+':
            printf("%lf + %lf = %0.1lf", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%lf - %lf = %0.1lf", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%lf * %lf = %0.1lf", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%lf / %lf = %0.1lf", num1, num2, num1 / num2);
            break;
            
        case '%':
            printf("%lf %% %lf = %d", num1, num2, (int)num1 % (int)num2);
            break;
        default:
            printf("\nenter correct input");
    }
    getch();
}
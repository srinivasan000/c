///////////////////////// char datatype ////////////////////
// char name='c'
#include <stdio.h>
#include <conio.h>
void fun1(char);
char fun2();
char fun3(char);
char* fun4();
char fun5(char *ptr);

void main()
{
    char a, b, c;
    char *ptr;
    printf("\nenter charector:");
    a = getchar();
    getchar();
    printf("\nenter charector:");
    b = getchar();
    getchar();
    printf("\nenter charector:");
    c = getchar();
    printf("\n%c,%c,%c",a,b,c);

    fun1(a);
    a = fun2();
    printf("\n%c\n", a);
    a = fun3(a);
    printf("\n%c\n", a);
    ptr = fun4();
    printf("\n%c\n", *ptr);
    a = fun5(ptr);
    printf("%c\n", a);
    getch();
}

void fun1(char a){
    printf("\nfunction1\n%c\n", a);
}
char fun2(){
     printf("\n function2");
     return '2';
}
char fun3(char a){
    a = (char)((int)a + 1);
    printf("function3");
    return a;
}
char* fun4(){
    static char a = '4';
    char *p = &a;
    printf("function4");
    return p;
}
char fun5(char *ptr){
    char a;
    printf("function5\n");
    a = *ptr;
    a = (char)((int)a + 1);
    return a;
}
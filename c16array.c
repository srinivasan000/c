/////////////////////  array datatype /////////////////////
//collection of same datatype elements
#include<stdio.h>
#include<conio.h>
void out(char[]);
char* input();
void main(){
    char *p;
    char name[20];
    int i;
    puts("\nenter your name:\t");
    gets(name);
    out(name);
    p = input();
    for (i = 0; i <= 20;i++){
        printf("%c", *(p+i));
    }
}


void out(char name[]){
    puts("from out function name:");
    puts(name);
}
char* input(){
   static char name[20];
    char *p;
    printf("enter your name from input function:\t");
    gets(name);
    p = name;
    return p;
}
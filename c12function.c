//////////////////////// function ////////////////////////////
// returntype name(argument){//scope block}//decler  name(argumet);//call  
#include<stdio.h>
#include<conio.h>
void welcome();    //void welcome function decler
void hello(char[]);  //void hello function decler
int add(int, int);   //int add function
int multiple(float, float); //float argument mutiple functon
char operation(char); //char operation function
char* name(); //array name function
void sum(char *P); //pointer argumet function

void main(int argc,char *argv[]){  //main function arguments
    char *p;
    int i;
    printf("\nargc:%d",argc);
    printf("\nargv:%s\n\n", argv[0]);
    welcome(); //function call
    hello("srinivasn");
    printf("\n%d",add(5,5));
    printf("\n%d",multiple(5,5));
    printf("\n%c\n",operation('c'));
    p = name();
    for (i = 0; i <= 20;i++){
        printf("%c", *(p+i));}
    printf("\n");
    sum(p);
    getch();
}
void welcome(){  //welcome function no parameter
    printf("\n********************welcome******************\n");
}
void hello(char name[]){ //hello function with char array parameter
    printf("\n Hello!... %s", name);
}
int add(int a,int b){
    return a + b;
}
int multiple(float a,float b){
    return a * b;
}
char operation(char a){
    return a;
}
char* name(){
  static char name[20];
    printf("enter your name:");
    scanf("%s", &name);
    return name;
}
void sum(char *p){
    int i;
    for (i = 0; i <= 20;i++){
        printf("%c", *(p+i));}
}

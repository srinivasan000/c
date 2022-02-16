#include<stdio.h>
int n=20;
extern int n;
int add(int n1,int n2){
    
    return n1 + n2;
}
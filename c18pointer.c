///////////////////////////// pointer ////////////////////////////
#include<stdio.h>
#include<conio.h>
void main(){
    int a;
    int *p1;
    int **p2;
    a = 5;
    p1 = &a;
    printf("%d", a);//5
    printf("\n%d", *&a);//5
    printf("\n%d", *p1);//5
    p2 = &p1;
    printf("\n%d", **p2);//5
    **p2 = **p2 + 1;
    printf("\n%d", a);//6
}
//int *p;integerpointer
//float *p;float pointer
//char *c;char pointer
//void *p;void pointer
//int* fun();//return integer pointer
//float* fun() //return float pointer
//char* fun() //return char pointer
//(*funname)();function pointer

//dynamic memory
/*
ptr=(datatype*)malloc(size*sizeof(datatype));
ptr=(datatype*)calloc(size,sizeof(datatype));
ptr=realloc(oldsize,newsize);
free(ptr);
*/
/////////////// char array string datatype ///////////////////
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main(){
    int a = 4;
    char name[] = "SRINIvasan";
    char var1[20],var2[20];
    printf("\n%.2f", sqrt(a));// root(4)=2
    printf("\n%.2f", pow(a, 2));//4*4=16
    printf("\n%.2f", ceil(4.1));//5
    printf("\n%.2f", floor(5.9));//5
    printf("\n%s",strupr(name));//uppercase
    printf("\n%s",strlwr(name));//lowercase
    printf("\n%d", strlen(name));//10
    printf("\n%s\n", strrev(name));//nasavINIRS
    strrev(name);
    strcpy(var1, name);//copy
    puts(var1);//srinivasan
    strcat(name, var1);
    puts(name);//srinivasansrinivasan
}
//strlen
//strrev
//strupr
//strlwr
//strcpy(to,from)
//strncpy(to,from,len)
//strcat(a,b)
//strncat(a,b[index])
//strcmp(a,b)
//strncmp(a,b,len)
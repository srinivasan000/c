#include<stdio.h>
void main(){
    char b[10]="srinivasan";
    FILE *fp;
    fp=fopen("a.txt","a");
    fprintf(fp,"%s",b);
    fclose(fp);
}
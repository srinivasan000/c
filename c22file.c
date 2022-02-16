///////////////////// filehandling /////////////////////
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    char title[20],h1[20],c[50];
    puts("page tile here \t");
    gets(title);
    puts("page heading hera \t");
    gets(h1);
    puts("page content here\t");
    gets(c);

  FILE *p;
  p=fopen("a.html","w");
  fprintf(p,"<html><head><title>%s</title></head><body><h1 style='text-align:center;color:#ff0000;'>%s</h1><p>%s</p></body></html>",title,h1,c);
  if(p==NULL){
      puts("error");
  }else{
      puts("create succesfully!.");
  }
  fclose(p);
  getch();
}


/*************************
decler:       FILE *fp;
open point:   fp=fopen("filename","mode");       modes:(r,w,a,r+,w+,a+),t,b
write char:   fputc('a',fp);
read char:    fgetc(fp);
write int:    putw(1,fp);
read int:     getw(fp);
write string: fputs("string",fp);
read string:  fgets(strpointer,no of char,fp);
write forma:  fprintf(fp,"%s","string");
read format:  fscanf(fp,"%s",a);
write entire: fwrite(strptr,size,n,fp);
read entire:  fread(strptr,size,n,fp);
seek cursor:  fseek(fp,displaced,origin);
tell cursor:  ftell(fp);
rewind cursor: frewind(fp);
close file:  fclose(fp); 
**************************/
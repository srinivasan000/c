//////////////////////////// loops /////////////////////////
// while,do while,for,goto label,recursive function
#include<stdio.h>
#include<conio.h>
void main(){
    int i;
    
    ///// while loop /////
    i = 0;
    while(i<=5){
        if(i==0){
            i++;
            continue;    
        }
        printf("%d", i);
        i++;
    }//12345
    //////// do-while loop /////
    do{
        if(i==6){
            i--;printf("\n");
            }
        printf("%d", i);
        i--;
    } while (i >= 1); //54321
    printf("\n");
    //////// for loop //////////
    for(i = 1; i <= 5;i++){
        printf("%d", i);
    }
    //////// goto label ////////
    i = 0;
    printf("\n");
    loop:
        i++;
        printf("%d", i);
        if (i <= 4)
        {
            goto loop;
    }
    //////////// function loop ////////////
    printf("\n");
    void loop(int start,int end){
         if(start==end){
             printf("%d", start);
         }else if (start<end){
             printf("%d", start);
             loop(++start,end);
         }else if(start>end){
             printf("%d", start);
             loop(--start,end);
         }else{
             printf("error");
         } 
    }
    loop(1, 5);
}

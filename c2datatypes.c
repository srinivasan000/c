/*
///////////////// primary data types ///////////////////////
data type          -> format specifier     ->   size 

char               ->      %c              ->   1byte
unsigned char      ->      %hhu            ->   1byte

short int          ->     %hi,%hd          ->   2bytes
unsigned short int ->      %hu             ->   2bytes
int                ->     %d,%d            ->   4bytes
unsigned int       ->      %u              ->   4bytes
long int           ->     %ld,%li          ->   4bytes
unsigned long int  ->      %lu             ->   4bytes
long long int      ->      %lld,%lli       ->   8bytes

float              ->    %a,%e,%f,%g       ->   4bytes
double             ->   %la,%le,%lf,%lg    ->   8bytes
long double        ->   %LA,%LE,%LF,%LG    ->   12bytes

bool           ->      %d               ->   1 or 0


%s-string
%p-addres
%o-octal
%x-exha

///////////////////// reference data types ////////////////////////
 array
 string
 pointer
 enum
 union
 structure
*/
#include<stdio.h>
#include<conio.h>
void main(){
    printf("\nchar -> %d", sizeof(char));
    printf("\nunsigned char -> %d", sizeof(unsigned char));
    printf("\nshort int -> %hd", sizeof(short int));
    printf("\nunsigned short int -> %hu", sizeof(unsigned short int));
    printf("\nint ->%d", sizeof(int));
    printf("\nunsigned int ->%d",sizeof(unsigned int));
    printf("\nlong int -> %d",sizeof(long int));
    printf("\nunsigned long int -> %d",sizeof(unsigned long int));
    printf("\nlong long int -> %d",sizeof(long long int));
    printf("\nunsigned long long int -> %d",sizeof(unsigned long long int));
    printf("\nfloat ->%d",sizeof(float));
    printf("\ndouble ->%d",sizeof(double));
    printf("\nlong double ->%d",sizeof(long double));
    getch();
}
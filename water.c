#include <stdio.h>

int main(void){

    int minutes , bottles;

    do{
       printf("Minutes:");
       scanf("%i", &minutes);
   }while( minutes < 0 );

   bottles = minutes * 12;
   printf("Bottles:");
   printf("%i\n",bottles);

   return 0;
}
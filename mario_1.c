#include <stdio.h>

int main(void)
{
   int height;
   int space;

   do{
       printf("Floor:");
       scanf("%d", &height);
   }while( height<0 || height>23 );

   for( int line=0 ; line < height ; line++)
   {
      for(space=height-line ; space > 1 ; space--){
         printf(" ");
      }
      for(int steps=0 ; steps < line+2 ; steps++){
         printf("*");
      }
      printf("\n");
   }
   return 0;
}

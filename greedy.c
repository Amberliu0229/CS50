#include <stdio.h>

int main(void){

    float money,change_25,change_10,change_5,change_1;
    int count = 0,change;

    do{
       printf("How much change is owed?\n");
       scanf("%f", &money);
       printf("==========\n");
   }while( money < 0 );

   change = (money * 100);

    while(change >= 25){
        count ++;
        change_25 = (change/25);
        change = change-(change_25*25);
    }
    printf("0.25:%.1f\n",change_25);

    while(change >= 10){
        count ++;
        change_10 = (change/10);
        change = change-(change_10*10);
    }
    printf("0.10:%.1f\n",change_10);

    while(change >= 5){
        count ++;
        change_5 = (change/5);
        change = change-(change_5*5);
    }
    printf("0.05:%.1f\n",change_5);

    while(change >= 1){
        count ++;
        change_1 = (change/1);
        change = change-(change_1*1);
    }
    printf("0.01:%.1f\n",change_1);

    printf("How many kinds of coins will you get?\n%d\n",count);
    
    return 0;
}
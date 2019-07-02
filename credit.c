#include <stdio.h>
#include <math.h>

int main(void){

    long long creditnumber,cvnumber,checknumber;
    int count = 0 , creditarray[16] , creditcount[16], sum = 0 , oddsum = 0;

    do{
        printf("Credit Card Number:");
        scanf("%llu", &creditnumber);
    }
    while(creditnumber < pow(10,12)  || creditnumber > pow(10,17));
    
    cvnumber=creditnumber;
    
    while(cvnumber != 0)
    {
        cvnumber /= 10;
        ++count;
    }
    for ( int i = 0 ; i<count ; i++ ){
        creditarray[i] = creditnumber % 10 ;
        creditnumber = creditnumber / 10;
        creditcount[i] = creditarray[i];
        if( i%2 == 1){
            creditcount[i] = creditcount[i] * 2 ;
            sum += creditcount[i] % 10 + creditcount[i] % 100 / 10;
        }else if ( i%2 == 0 ){
            oddsum += creditcount[i];
        }
    }
    checknumber = oddsum + sum ;

    // printf("%d\n",creditarray[12]);
    if( count == 15 && checknumber%10 == 0 && creditarray[14] == 3 && ( creditarray[13] == 4 || creditarray[13] == 7)){
        printf("American Express\n");
    }else if( count == 16 && checknumber%10 == 0 && creditarray[15] == 5 && ( creditarray[14] == 1 || creditarray[14] == 2 || creditarray[14] == 3 || creditarray[14] == 3 || creditarray[14] == 5 ) ){
        printf("MasterCard\n");
    }else if (count == 16 && checknumber%10 == 0 && creditarray[15] == 4){
        printf("Visa\n");
    }else if( count == 13 && checknumber%10 == 0 && creditarray[12] == 4){
        printf("Visa\n");
    }else{
        printf("This is invalid!!!\n");
    }

    return 0;
}

    // printf("%d digitals\n", count);

    // if( count!=13 && count!=15 && count!=16 ){
    //     printf("This is invalid!!!\n");
    // }
    // printf("%llu\n", creditnumber);

    // printf ("%d\n",oddsum);
    // printf ("%d\n",sum);
    // creditarray[15] = creditnumber%10 ;
    // creditarray[14] = (creditnumber%100)/10 *2 ;
    // creditarray[13] = (creditnumber%1000)/100 ;
    // creditarray[12] = (creditnumber%10000)/1000 *2;
    // creditarray[11] = (creditnumber%100000)/10000 ;
    // creditarray[10] = (creditnumber%1000000)/100000 *2;
    // creditarray[9]  = (creditnumber%10000000)/1000000 ;
    // creditarray[8]  = (creditnumber%100000000)/10000000 *2;
    // creditarray[7]  = (creditnumber%1000000000)/100000000 ;
    // creditarray[6]  = (creditnumber%10000000000)/1000000000 *2;
    // creditarray[5]  = (creditnumber%100000000000)/10000000000 ;
    // creditarray[4]  = (creditnumber%1000000000000)/100000000000 *2;
    // creditarray[3]  = (creditnumber%10000000000000)/1000000000000 ;
    // creditarray[2]  = (creditnumber%100000000000000)/10000000000000 *2;
    // creditarray[1]  = (creditnumber%1000000000000000)/100000000000000 ;
    // creditarray[0]  = (creditnumber%10000000000000000)/1000000000000000 *2;

    // checknumber = creditarray[14]%10 + (creditarray[14] %100/10);
    // checknumber = (checknumber + creditarray[12]%10 + (creditarray[12] %100/10)) ;
    // checknumber = (checknumber + creditarray[10]%10 + (creditarray[10] %100/10)) ;
    // checknumber = (checknumber + creditarray[8]%10 + (creditarray[8] %100/10)) ;
    // checknumber = (checknumber + creditarray[6]%10 + (creditarray[6] %100/10)) ;
    // checknumber = (checknumber + creditarray[4]%10 + (creditarray[4] %100/10)) ;
    // checknumber = (checknumber + creditarray[2]%10 + (creditarray[2] %100/10)) ;
    // checknumber = (checknumber + creditarray[0]%10 + (creditarray[0] %100/10)) ;

    // checknumber = checknumber+creditarray[15]+creditarray[13]+creditarray[11]+creditarray[9]+creditarray[7]+creditarray[5]+creditarray[3]+creditarray[1];

    // if(checknumber%10 == 0){
    //     printf("This is valid!!!\n");
    // }else{
    //     printf("This is invalid!!!\n");
    // }

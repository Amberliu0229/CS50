#include<stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

    char str[] = "amber liu";
    char code[] = "hi";
    char addcode[strlen(str)];

    // printf("plaintext:");
    // printf("%s\n", str);
    // printf("ciphertext:");
    
    // for ( int i = 0 ; i < strlen(str) ; i++ ){
    //     if (str[i] == ' ' ){
    //         printf(" ");
    //     }else{
    //         printf("%c" , (str[i] + 1));
    //     }
    // }
    // printf("\n");
    // printf("%lu\n", strlen(str));
    for ( int i = 0 ; i < strlen(str) ; i++ ){
        if( i % 2 == 0 ){
            addcode[i] = code[0]; 
            // printf("%c",addcode[i]);
        }else if ( i % 2 == 1 ){
            addcode[i] = code[1];
            // printf("%c",addcode[i]); 
        }        
    }
    // printf("\n");
    // printf("%s\n", addcode);

    for (int i = 0 ; i < strlen(str) ; i++){
        if (str[i] == ' ' ){
        printf(" ");
        }else{
            printf("%c" , ( (str[i] + addcode[i] - 'a' * 2 )) % 26 + 'a');
        }
    }
    printf("\n");
    return 0;
}
#include<stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

    char str[30] = "amber liu";
    printf("plaintext:");
    // scanf("%c", str);
    printf("%s\n", str);
    printf("ciphertext:");
    for ( int i = 0 ; i < strlen(str) ; i++ ){
        if (str[i] == ' ' ){
            printf(" ");
        }else{
            printf("%c" , (str[i] + 1));
        }
    }
    printf("\n");
    return 0;
}
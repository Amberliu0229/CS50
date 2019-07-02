#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main(void)
{
    char str_1[] = "amber liu";
    // scanf("%s", str);
    printf("amber liu\n");
    printf("%c", toupper(str_1[0]));
    for (int i=0 ; i< strlen(str_1) ;i++){
        // if (str[i] >='a' && str[i] <= 'z'){
        if( str_1[i] == ' ' && str_1[i+1] != '\0'){
            printf("%c" , toupper(str_1[i+1]));
        }
    }
    printf("\n");

    char str_2[] = "     amber liu";
    // scanf("%s", str);
    printf("amber liu\n");
    printf("%c", toupper(str_2[0]));
    for (int i=0 ; i< strlen(str_2) ;i++){
        // if (str[i] >='a' && str[i] <= 'z'){
        if( str_2[i] == ' ' && str_2[i+1] != ( '\0' && ' ')){
            printf("%c" , toupper(str_2[i+1]));
        }
    }
    printf("\n");


	return 0;
}
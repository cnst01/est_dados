#include <stdio.h>
#include <string.h>

void main(){
    char str1[100];
    gets(str1);
    char str2[100];
    gets(str2);
    if(strcmp(str1,str2) == -1){
        strcat(str1,str2);
    }
    printf("\nstring resultante é: %s\n", str1);
}
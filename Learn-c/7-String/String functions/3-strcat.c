#include <stdio.h>
#include <string.h>

int main(){
    char str1[50]="Hello, ";
    char str2[]="World!";

    // Concatenating str2 to str1
    strcat(str1, str2);

    printf("Concatenated String: %s\n", str1);

    return 0;
}
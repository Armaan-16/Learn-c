#include <stdio.h>
#include <string.h>

int main(){
    char source[]="Armaan Mishra";
    char destination[50];

    // Copying the string
    strcpy(destination, source);

    printf("Source String: %s\n", source);
    printf("Destination String: %s\n", destination);

    return 0;
}

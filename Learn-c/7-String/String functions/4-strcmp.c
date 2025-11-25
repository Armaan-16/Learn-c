#include <stdio.h>
#include <string.h>

int main() {
    int a = strcmp("far", "far"); // output is 0
    int b = strcmp("far", "farmer"); // output is negative value
    int c = strcmp("farmer", "far"); // output is positive value
    printf("The value of strcmp is %d\n", b);
    printf("The value of strcmp is %d\n", a);
    printf("The value of strcmp is %d", c);
    return 0;
}

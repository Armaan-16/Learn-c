#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodevening();

void goodmorning() {
    printf("Good Morning\n");
}

void goodafternoon() {
    printf("Good Afternoon\n");
}

void goodevening() {
    printf("Good Evening\n");
}
int main() {
    goodmorning();
    goodafternoon();
    goodevening();
    return 0;
}
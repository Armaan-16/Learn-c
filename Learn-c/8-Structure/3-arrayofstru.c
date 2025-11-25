#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};


int main(){
    struct employee e[3];
    for (int i=0; i<3; i++){
        printf("Enter code: ");
        scanf("%d", &e[i].code);
        printf("Enter salary: ");
        scanf("%f", &e[i].salary);
        printf("Enter name: ");
        scanf("%s", e[i].name);
    }
    for (int i=0; i<3; i++){
        printf("%d %f %s\n", e[i].code, e[i].salary, e[i].name);
    }
    return 0;
}
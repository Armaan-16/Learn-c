#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

void show(struct employee emp){
    printf("code is %d\nSalary is %f\nName is %s\n", emp.code, emp.salary, emp.name );
}

int main(){
    struct employee e1;
   
    printf("Enter code: ");
    scanf("%d", &e1.code);
    printf("Enter salary: ");
    scanf("%f", &e1.salary);
    printf("Enter name: ");
    scanf("%s", e1.name);

    show(e1);

    return 0;   

}
// int main(){
//     typedef int arx;
//     arx a = 10;
//     printf("The value of a is %d", a);this prints 10
//     return 0;
#include<stdio.h>
#include<string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[20];  
}emp; 
// typedef creates an alias emp for struct employee

int main(){
    emp e1;
    emp *ptr=&e1;
    e1.code=1001;
    e1.salary=34.56;
    strcpy(e1.name, "Armaan");
    
    printf("%d %f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %f %s\n", ptr->code, ptr->salary, ptr->name);
    return 0;   

}

 
#include<stdio.h>

int main(){
    int arr[3][2]; // first dimension 3 rows and second dimension 2 columns
    // taking input in 2D array
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("Enter value for arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    // printing the 2D array
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){

    //declaring the variables
    int i,j,N,columns;

    //number of columns
    printf("Enter number of columns: ");
    scanf("%d", &N);

    columns = 1;
    
    for (int i=1; i < N*2; i++){
        for(j=1; j<=columns; j++){
            printf("*");
        }
        if(i<N){
            columns++;
        } else {
            columns --;
        }
        printf("\n");
    }

    return 0;
}
#include<stdio.h>
int main()

{
    int x;
    printf("Enter a Number :\n");
    scanf("%d",&x);
    if(0<x){
        printf("\nPositive");
    }
    else if(x==0){
        printf("Neutral");
    }
    else{
        printf("\nNegative");
    }
    return 0;
}

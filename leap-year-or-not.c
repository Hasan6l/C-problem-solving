#include<stdio.h>
int main()

{
    int x;
    printf("Enter a Year :\n");
    scanf("%d",&x);
    if((x%4==0 && x%100!=0) || x%400==0){
        printf("\nIt's a leap Year! :)");
    }
    else{
        printf("\nIt's Not a leap Year :(");
    }
    return 0;
}

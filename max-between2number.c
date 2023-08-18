#include<stdio.h>
int main()
{   
    int x,y;
    printf("Enter two number:\n");
    scanf("%d %d",&x,&y);
    if(x>y){
        printf("%d is maximum",x);
    } 
    else{
        printf("%d is maximum",y);
    }
}
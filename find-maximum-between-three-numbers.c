#include<stdio.h>
int main()
{
    int x,y,z;

    printf("Enter value of three numbers one by one:\n");
    scanf("%d %d %d",&x,&y,&z);

    if(x>y && x>z){
    printf("Maximum value =%d",x);
    }
    else if(y>x && y>z){
    printf("Maximum value =%d",y);
    }
    else{
            printf("Maximum value =%d",z);
    }
    return 0;
}


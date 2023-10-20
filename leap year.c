#include <stdio.h>
int main()

{
    int n;
    printf("Enter a Year :\n");
    scanf("%d", &n);

    if (n%400==0)
    {
        printf("leap year ! :)\n");
    }
    // or
    else if (n%4==0 && n%100!=0)
    {
        printf("leap year ! :)\n");
    }
    else
    {
        printf("not leap year :(\n");
    }
}

#include<stdio.h>
int main()
{
    int x;
    printf("Enter your age:\n");
    scanf("%d",&x);
  if(x<=0 || x>130){
    printf("Enter Valid age!");
 }

 else if(x<18){
    printf("Your are a child!");

 }
 else{
    printf("You are an adult");
 }
    return 0;
}

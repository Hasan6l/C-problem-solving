#include<stdio.h>
int main(){
 char x;
 printf("Enter any \"single\" digit,character,special-char :\n");
 scanf("%c",&x);
 if((x>='a' && x<='z')||(x>='A' && x<='Z')){
    printf("%c is an character\n",x);
 }
 else if(x>='0' && x<='9'){
    printf("%c is a digit\n",x);
 }
else{
    printf("%c is special character\n",x);
}
return 0;
}

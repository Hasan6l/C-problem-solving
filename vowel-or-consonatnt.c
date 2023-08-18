#include<stdio.h>
int main()
{
    char x;
    printf("Enter a character:\n");
    scanf("%c",&x);
    if((x>='a' && x<='z')||(x>='A' && x<='Z')){
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
        printf("%c is a Vowel !",x);
    }
     else{
        printf("%c is a Consonant !",x);
    } }
    else {
        printf("Not an alphabet");
    }
    return 0;
}


#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {
        printf("uppercase letter");
    }
    else if(ch>='a'&&ch<='z')
    {
        printf("lowercase letter");
    }

    else
    {
        printf("wrong input");
    }
    return 0;
}

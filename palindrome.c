
#include<stdio.h>
int main()
{
    int n,hridoy=0,t;
    printf("enter a number to check palindrome or not\n");
    scanf("%d",&n);
    t=n;

    while(t!=0)
    {
        hridoy=hridoy*10;
        hridoy=hridoy+t%10;
        t=t/10;
    }

    if(n==hridoy)
        printf("YES",n);
    else
        printf("%d is not a palindrome number\n",n);
    return 0;
}

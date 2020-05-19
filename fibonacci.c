#include<stdio.h>
int main()
{
    int i,n,x=0,y=1,mehedi;
    printf("enter the number of terms");
    scanf("%d",&n);
    printf("Fibonacci series\n");

    for(i=1;i<=n;++i)
    {
        printf("%d\n", x);
        mehedi=x+y;
        x=y;
        y=mehedi;
    }
    return 0;

}

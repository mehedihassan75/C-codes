#include<stdio.h>
int main()
{
    int num;
    int count=0;
    printf("enter any number");
    scanf("%d",&num);
    while(num!=0)
    {
        count++;
        num/=10;
    }
    printf("total digits:%d",count);
    return 0;
}

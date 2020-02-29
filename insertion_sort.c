#include<stdio.h>
int main()
{
    int m=3,i,j,temp;
    int data[3]={8,3,9};

    for(i=0;i<m;i++)
    {
        j=i;

        while(j>0 && data[j]<data[j-1])
        {
            temp=data[j];
            data[j]=data[j-1];
            data[j-1]=temp;
            j--;
        }
    }
    printf("\nascending order :\n");
    for(i=0;i<m;i++)
    {
        printf("%d",data[i]);
    }
    return 0;
}

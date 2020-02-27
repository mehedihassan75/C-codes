#include<stdio.h>
int main()
{
    int m=4,i,j,temp;
    int data[4]={8,7,9,10};

    for(i=0;i<m-1;i++)
    {
        for(j=0;j<m-i-1;j++)
        {
            if(data[j]>data[j+1])
            {
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    printf("\nbubble sort \n:");
    for(i=0;i<m;i++)
    {
        printf("%d",data[i]);
    }
    return 0;
}

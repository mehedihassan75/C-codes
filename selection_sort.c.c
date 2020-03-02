#include <stdio.h>
int main()
{
    int n=4,i,j,temp;
    int data[4]={4,2,3,1};
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(data[i]>data[j])
            {
                temp=data[i];
                data[i]=data[j];
                data[j]=temp;
            }
        }
    }
    printf("selection sort :");
    for(i=0;i<n;i++)
    {
        printf("%d",data[i]);
    }
    return 0;
}

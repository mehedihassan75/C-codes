#include<stdio.h>
//using namespace std;

int mrg(int arr[],int l,int m,int h)
{
    int arr1[10],arr2[10];

    int n1,n2,i,j,k;
    n1=m-l+1;
    n2=h-m;

    for(i=0; i<n1; i++)
        arr1[i]=arr[l+i];
    for(j=0; j<n2; j++)
        arr2[j]=arr[m+j+1];

    arr1[i]=1111;
    arr2[j]=1111;

    i=0;
    j=0;
    for(k=l; k<=h; k++)
    {
        if(arr1[i]<=arr2[j])
            arr[k]=arr1[i++];
        else
            arr[k]=arr2[j++];
    }

    return 0;
}
int merge_sort(int arr[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        mrg(arr,low,mid,high);
    }

    return 0;
}
int main()
{
    int n,i;
    int arr[7]={23,4,78,1,0,7,45};
    merge_sort(arr,0,7-1);
    for(i=0; i<7; i++)
        printf("%d ",arr[i]);

    return 0;
}


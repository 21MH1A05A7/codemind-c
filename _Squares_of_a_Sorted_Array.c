#include <stdio.h>
void select_sort(int *arr,int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n,arr[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int l[100];
    for(i=0;i<n;i++)
    {
        l[i]=arr[i]*arr[i];
    }
    select_sort(l,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",l[i]);
    }
}
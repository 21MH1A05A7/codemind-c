#include <stdio.h>
int main()
{
    int n,i,arr[100],count=0,k=0,l[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            l[k]=arr[i];
            k++;
        }
        else
        {
            count++;
            
        }
    }
    while(count)
    {
        l[k++]=0;
        count--;
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",l[i]);
    }
}
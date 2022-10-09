#include <stdio.h>
int main()
{
    int n,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int l[100],j=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            l[j]=0;
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            l[j]=1;
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",l[i]);
    }
}
#include <stdio.h>
int main()
{
    int n,i,l[100],arr[100],k=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i+=2) //0 2
    {
        for(j=0;j<arr[i];j++)
        {
            l[k]=arr[i+1];
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",l[i]);
    }
}
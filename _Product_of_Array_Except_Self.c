#include <stdio.h>
int main()
{
    int n,arr[100],l[100],i,j,s=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                continue;
            }
            else
            {
                s=s*arr[j];
            }
        }
        l[i]=s;
        s=1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",l[i]);
    }
}
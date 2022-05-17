#include <stdio.h>
int main()
{
    int n,arr[100],i,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]+1<=n)
        {
            f+=1;
        }
    }
    if(f==n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
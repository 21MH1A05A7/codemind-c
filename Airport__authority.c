#include <stdio.h>
int main()
{
    int n,a[100],i,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    scanf("%d",&k);
    int s=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<=k)
        {
            s+=1;
        }
        else
        {
            s=s+2;
        }
    }
    printf("%d",s);
}
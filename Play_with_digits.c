#include <stdio.h>
int main()
{
    int n,k,i,arr[100],s=0,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<n;i++)
    {
        while(arr[i])
        {
            r=arr[i]%10;
            s=s+r;
            arr[i]=arr[i]/10;
        }
    }
    printf("%d",s);
}
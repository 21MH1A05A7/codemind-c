#include <stdio.h>
int main()
{
    int n,i,arr[100];
    long int s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    printf("%ld",s);
    
}
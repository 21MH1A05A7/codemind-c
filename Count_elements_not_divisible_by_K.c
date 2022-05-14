#include <stdio.h>
int main()
{
    int n,k,i,arr[100],s=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%k!=0)
        {
            s+=1;
        }
    }
    printf("%d",s);
}
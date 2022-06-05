#include <stdio.h>
int main()
{
    int n,arr[100],i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                //printf("%d
",arr[i]);
                c++;
            }
        }
        if(c==2)
        {
            printf("%d",arr[i]);
            break;
        }
        c=0;
    }
}
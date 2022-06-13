#include <stdio.h>
int main()
{
    int n1,arr[100],i,j,l[100];
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr[i]);
    }
    int n2,k,c=0;
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&l[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n1;i++)
    {
        for(j=arr[i];j<=l[i];j++)
        {
            if(j==k)
            {
                c+=1;
                break;
            }
        }
    }
    printf("%d",c);
}
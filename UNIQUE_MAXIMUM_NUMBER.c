#include <stdio.h>
int count(int *arr,int val,int n)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(val==arr[i])
        {
            c+=1;
        }
    }
    return c;
}
/*int max(int *a,int m)
{
    int m1=a[0],i;
    for(i=0;i<m;i++)
    {
        if(a[i]>m1)
        {
            m1=a[i];
        }
    }
    return m1;
}*/
int main()
{
    int n,arr[100],i,a[100],f=0,max=0; // 1 2 
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        //printf("%d ",arr[i]);
        if(count(arr,arr[i],n)==1)
        {
            a[i]=arr[i];
            f=1;
            if(a[i]>max)
            {
                max=a[i];
            }
        }
    }
    if(f==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",max);
    }
}
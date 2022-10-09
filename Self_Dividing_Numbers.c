#include <stdio.h>

int valid(int n)
{
    int r,temp=n,c_in=0,c_out=0;
    while(temp)
    {
        r=temp%10;
        if(r==0)
        {
            return false;
        }
        if(n%r==0)
        {
            c_in++;
        }
        c_out++;
        temp=temp/10;
    }
    if(c_in==c_out)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n,m,i;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=n;i<=m;i++)
    {
        if(valid(i))
        {
            printf("%d ",i);
        }
    }
}
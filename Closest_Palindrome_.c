#include <stdio.h>
#include <math.h>
int palin(int n)
{
    int rev=0,i,temp=n,r;
    while(temp)
    {
        r=temp%10;
        rev=rev*10+r;
        temp=temp/10;
    }
    return rev;
}
int main()
{
    int n,i,x=0,y=0;
    scanf("%d",&n);
    for(i=1;i<=n+100;i++)
    {
        if(i<n && i!=n)
        {
            if(i==palin(i))
            {
                x=i;
            }
        }
        else
        {
            if(i!=n)
            {
            if(i==palin(i))
            {
                y=i;
                break;
            }
            }
        }
    }
    if(abs(n-x)==abs(y-n))
    {
        printf("%d %d",x,y);
    }
    else if(abs(n-x)<abs(y-n))
    {
        printf("%d",x);
    }
    else
    {
        printf("%d",y);
    }
}

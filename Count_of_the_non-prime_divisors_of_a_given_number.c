#include <stdio.h>
int prime(int n)
{
    int i,f=0;
    if(n==1)
    {
        return false;
    }
    else
    {
        for(i=2;i<=int(n/2);i++)
        {
            if(n%i==0)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int n,c=1,i=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(prime(i))
        {
            if(n%i==0)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}
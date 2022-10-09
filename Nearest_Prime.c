#include <stdio.h>
#include <math.h>
int prime(int n)
{
    int i,f=0;
    for(i=2;i<=int(n)/2;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        return false;
    }
    else
    {
        return true;
    }
}


int main()
{
    int t,i,n,x=0,y=0,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=2;j<=n+10;j++)
        {
            if(j<n)
            {
                if(prime(j))
                {
                    x=j;
                }
            }
            else
            {
                if(prime(j))
                {
                    y=j;
                    break;
                }
                
            }
        }
        if(abs(x-n)<abs(y-n))
        {
            printf("%d
",x);
        }
        else if(abs(x-n)==abs(y-n))
        {
            if(x<y)
            {
                printf("%d
",x);
            }
            else
            {
                printf("%d
",y);
            }
        }
        else
        {
            printf("%d
",y);
        }
    }
}
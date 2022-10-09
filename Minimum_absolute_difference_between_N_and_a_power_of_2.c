#include <stdio.h>
#include <math.h>
int main()
{
    int n,x=0,z,i,y=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        z=pow(2,i);
        if(z<=n)
        {
            x=z;
        }
        else
        {
            y=z;
            break;
        }
    }
    if(abs(x-n)<abs(y-n))
    {
        printf("%d",abs(x-n));
    }
    else
    {
        printf("%d",abs(y-n));
    }
    
}
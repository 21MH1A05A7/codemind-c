#include <stdio.h>
#include <math.h>
int main()
{
    int n,i=0,s=0,r;
    scanf("%d",&n);
    int t=n,t1=n;
    while(n)
    {
        i++;
        n=n/10;
    }
    while(t1)
    {
        r=t1%10;
        s=s+pow(r,i);
        t1=t1/10;
        i--;
    }
    if(s==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
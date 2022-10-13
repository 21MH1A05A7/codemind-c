#include <stdio.h>
int single(int n)
{
    int s=0,temp=n,r;
    while(temp)
    {
        r=temp%10;
        s=s+r;
        temp=temp/10;
    }
    if(s>=10)
    {
        return single(s);
    }
    else
    {
        return s;
    }
}
int main()
{
    int n,r;
    scanf("%d",&n);
    r=single(n);
    printf("%d",r);
}
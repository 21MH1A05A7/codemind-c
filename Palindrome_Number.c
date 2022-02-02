#include <stdio.h>
int main()
{
    int n,i,a,temp,r;
    scanf("%d",&n);
    for(i=1;i<n+1;i++)
    {
        scanf("%d",&a); // %d
        temp=a;
        int s=0;
        while(a!=0)
        {
            r=a%10; // remainder
            s=s*10+r;
            a=a/10;
        }
        if(s==temp)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
        s=0;
    }
}
#include<stdio.h>
int happy(int n)
{
    int temp,r,s=0;
    temp=n;
    while(temp)
    {
        r=temp%10;
        s=s+(r*r);
        temp=temp/10;
    }
    if(s>=10)
    {
        happy(s);
    }
    else
    {
        if(s==1 || s==7)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
   if(happy(n))
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
    
}
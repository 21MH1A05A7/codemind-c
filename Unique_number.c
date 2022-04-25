#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n,c=0,flag=0,r,p,temp2=n;
    
    while(n)
    {
        //temp=5123
        //temp
        temp=temp2;
        int count=0;
        r=n%10; //3 2 1 5
        while(temp) // 5123
        {
            p=temp%10; // 3 2 1 5
            if(r==p)
            {
                count++;
            }
            temp=temp/10;
        }
        c++; //digit count
        if(count==1)
        {
            flag++;
        }
        n=n/10;
    }
    if(flag==c)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
    
}
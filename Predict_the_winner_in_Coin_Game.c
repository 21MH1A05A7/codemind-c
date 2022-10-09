#include <stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    if(m%4==0 || n%4==0)
    {
        printf("Player 1");
    }
    else
    {
        printf("Player 2");
    }
    
}
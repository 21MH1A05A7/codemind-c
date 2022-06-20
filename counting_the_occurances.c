#include <stdio.h>
int main()
{
    char st[1000],k;
    scanf("%[^
]s",st);
    int i,count=0;
    scanf(" %c",&k);
    for(i=0;st[i]!=NULL;i++)
    {
        if(k==st[i])
        {
           
            count++;
        }
    }
    if(count==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",count);
    }
}
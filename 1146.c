#include<stdio.h>
int main()
{
    int x,n,i,j;
    while(1)
    {
        scanf("%d",&n);
        if(n!=0)
        {
        for(i=1;i<=n;i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    else
    {
        break;
    }
    }
    return 0;
}

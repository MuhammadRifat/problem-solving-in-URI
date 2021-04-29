#include<stdio.h>
int main()
{
    int n,x=0,y=1,i,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i<=1)
        {
            f=f+i;
        }
        else
        {
            f=x+y;
            x=y;
            y=f;

        }
        printf("%d ",f);
    }
    return 0;
}

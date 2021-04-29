#include<stdio.h>
int main()
{
    int x,y,i,j=0,k,n=1,f;
    scanf("%d %d",&x,&y);
    k=y/x;
    f=x;
    for(i=0;i<k;i++)
    {
        for(j=n;j<=f;j++)
        {
          printf("%d ",j);
        }
        printf("\n");
        n=n+x;
        f=f+x;
    }
    return 0;

}

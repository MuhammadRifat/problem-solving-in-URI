#include<stdio.h>
int main()
{
    int n,x,i,j,k=0,count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        count=0;
        k=0;
        scanf("%d",&x);
        for(j=1;j<=x/2;j++)
        {
            k=k+j;
            if(x==k)
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("%d eh perfeito\n",x);
        }
        else
        {
            printf("%d nao eh perfeito\n",x);
        }
    }
    return 0;
}

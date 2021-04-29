#include<stdio.h>
int main()
{
    int i,n,j,p=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        for(j=2;j<ar[i]/2;j++)
        {
            if(ar[i]%j==0)p++;
        }
         if(p==0)
         {
             printf("%d nao eh primo\n",ar[i]);
         }

        else if(p!=0)
            {
                printf("%d eh primo\n",ar[i]);
            }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n,b,i,p=0;
    scanf("%d",&n);
    int a[n];
    b=a[0];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(b>a[i])
        {
            b=a[i];
            p=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",b,p);

    return 0;
}

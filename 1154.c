#include<stdio.h>
int main()
{
    int n,count=0;
    float avg,i=0;
    while(1)
    {
        scanf("%d",&n);
        if(n>0)
        {
            i=i+n;
            count++;
        }
        else
        {
            break;
        }
    }
    avg=i/count;
    printf("%.2f\n",avg);
    return 0;
}

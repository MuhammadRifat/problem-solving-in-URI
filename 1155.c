#include<stdio.h>
int main()
{
    float i,x=1;
    for(i=2;i<=100;i++)
    {
        x=x+(1/i);
    }
    printf("%.2f\n",x);

    return 0;
}

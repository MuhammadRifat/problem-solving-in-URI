#include<stdio.h>
int main()
{
    float i,s=1,k=1;
    for(i=3;i<=39;i+=2)
    {

        k=k*2;
        s=s+(i/k);
    }

    printf("%.2f\n",s);
    return 0;
}

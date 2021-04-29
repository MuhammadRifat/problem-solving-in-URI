#include<stdio.h>
main()
{
    float code,a,b,sum;
    float code1,x,y,sum1;
    float A;
    scanf("%f%f%f",&code,&a,&b);
    scanf("%f%f%f",&code1,&x,&y);
    sum=a*b;
    sum1=x*y;
    A=sum+sum1;
    printf("VALOR A PAGAR: R$ %.2f\n",A);
    return 0;
}

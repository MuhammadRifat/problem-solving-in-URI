#include<stdio.h>
main()
{
    double A,B,C,pi=3.14159,sum,sum1,sum2,sum3,sum4;
    scanf("%lf%lf%lf",&A,&B,&C);
    sum=(A*C)/2;
    sum1=pi*C*C;
    sum2=.5*(A+B)*C;
    sum3=B*B;
    sum4=A*B;
    printf("TRIANGULO: %.3lf\n",sum);
    printf("CIRCULO: %.3lf\n",sum1);
    printf("TRAPEZIO: %.3lf\n",sum2);
    printf("QUADRADO: %.3lf\n",sum3);
    printf("RETANGULO: %.3lf\n",sum4);
    return 0;
}

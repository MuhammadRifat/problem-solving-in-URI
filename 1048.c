#include<stdio.h>
main()
{
    float a,b,c;
    int p;
    char x='%';
    scanf("%f",&a);
    if(a>=0.00 && a<=400.00){
        b=a*.15;
        c=a+b;
        p=15;
    }
    else if(a>=400.1 && a<=800.00){
        b=a*.12;
        c=a+b;
        p=12;
    }
    else if(a>=800.01 && a<=1200.00){
        b=a*.10;
        c=a+b;
        p=10;
    }
    else if(a>=1200.01 && a<=2000.00){
        b=a*.07;
        c=a+b;
        p=7;
    }
    else if(a>2000){
        b=a*.04;
        c=a+b;
        p=4;
    }
    printf("Novo salario: %.2f\n",c);
    printf("Reajuste ganho: %.2f\n",b);
    printf("Em percentual: %d %c\n",p,x);
    return 0;
}

#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f",&a);
    if(0.00<=a && 2000.00>=a){
        printf("Isento\n");
    }
    else if(a>=2000.01 && a<=3000.00){
            b=a*.08;
        printf("R$ %.2f\n",b);
    }
    else if(a>=3000.01 && a<=4500.00){
        b=a*(18/100);
        printf("R$ %.2f\n",b);
    }
    else if(a>4500.00){
        b=a*.28;
        printf("R$ %.2f\n",b);
    }
    return 0;
}

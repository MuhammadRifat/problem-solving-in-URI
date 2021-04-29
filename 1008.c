#include<stdio.h>
main()
{
    int a,NUMBER;
    float b,c,SALARY;
    scanf("%d%f%f",&a,&b,&c);
    NUMBER = a;
    SALARY = b*c;
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2f\n",SALARY);
    return 0;
}

#include<stdio.h>
main()
{
   float A,B,C,D,sum,sum1;
   scanf("%f %f %f",&A,&B,&C);
   D = (B*B-4*A*C);
     if(D<0||A==0){
    printf("Impossivel calcular\n");
   }
   else {
   sum=(-B+sqrt(D))/(A+A);
   sum1=(-B-sqrt(D))/(A+A);
   printf("R1 = %.5f\n",sum);
   printf("R2 = %.5f\n",sum1);
   }
   return 0;

}

#include<stdio.h>
main()
{
    float X,Y,Total;
    scanf("%f%f",&X,&Y);
    if(X==1){
        Total=Y*4.00;
        printf("Total: R$ %.2f\n",Total);
    }
    else if(X==2){
        Total=Y*4.5;
        printf("Total: R$ %.2f\n",Total);
    }
    else if(X==3){
        Total=Y*5.00;
        printf("Total: R$ %.2f\n",Total);
    }
    else if(X==4){
        Total=Y*2.00;
        printf("Total: R$ %.2f\n",Total);
    }
    else if(X==5){
        Total=Y*1.50;
        printf("Total: R$ %.2f\n",Total);
    }
    return 0;
}

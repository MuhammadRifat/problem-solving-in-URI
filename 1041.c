#include<stdio.h>
main()
{
    float x,y;
    scanf("%f %f",&x,&y);
    if(x==0.0){
        if(y==0.0)printf("Origem\n");
        else printf("Eixo Y\n");
    }
    else if(y==0){
        if(x==0.0)printf("Origem\n");
        else printf("Eixo X\n");
    }
    if(0.0<x&&0.0<y){
        printf("Q1\n");
    }
    else if(0.0>x&&0.0>y){
        printf("Q3\n");
    }
    else if(0.0<x&&0.0>y){
        printf("Q4\n");
    }
    else if(0.0>x&&0.0<y){
        printf("Q2\n");
    }
    return 0;

}

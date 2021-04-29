#include<stdio.h>
int main()
{
    int a,b,c,d,x,y,z;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    x=c-a;
    y=d-b;

    if(x>0 && 0>y){
        z=60*x+y;
        printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",z);
    }
    else if(x>0 && y>0){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,y);
    }
    else if(a=b=c=d){
        printf("O JOGO DUROU 0 HORA(S) E 0 MINUTO(S)");
    }

    return 0;
}

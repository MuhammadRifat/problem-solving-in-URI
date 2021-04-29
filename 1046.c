#include<stdio.h>
main()
{
    int s,e,a;
    scanf("%d %d",&s,&e);
    a=e-s;
    if(a<0){
        a=24+(e-s);
        printf("O JOGO DUROU %d HORA(S)\n",a);
    }
    else if(e==s){
        printf("O JOGO DUROU 24 HORA(S)\n",a);
    }
    else if(a>0){
        printf("O JOGO DUROU %d HORA(S)\n",a);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int sh,sm,eh,em,a,b,c,d;
    scanf("%d %d %d %d",&sh,&sm,&eh,&em);
    a=eh-sh;
    b=em-sm;
    if(a<0 && b<0){
       c=24+(eh-sh);
       d=60+(em-sm);
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c,d);
    }
    else if(sh==eh && sm==em){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(a>0 && b>0){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",a,b);
    }
    return 0;
}

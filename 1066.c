#include<stdio.h>
main()
{
    int a,i,n=0,m=0,o=0,p=0;
    for(i=1;i<=5;i++){
        scanf("%d",&a);
        if(a%2==0){
            n++;
        }
        else{
            m++;
        }
        if(a>0){
            o++;
        }
        if(a<0){
            p++;
        }
    }
    printf("%d valor(es) par(es)\n",n);
    printf("%d valor(es) impar(es)\n",m);
    printf("%d valor(es) positivo(s)\n",o);
    printf("%d valor(es) negativo(s)\n",p);
    return 0;

}

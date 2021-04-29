#include<stdio.h>
main()
{
    int i,n=0;
    float a,b,m=0;
    for(i=1;i<=6;i++){
        scanf("%f",&a);
        if(a>0){
            m+=a;
            n++;
        }
    }
    b=m/n;
    printf("%d valores positivos\n%.1f\n",n,b);
    return 0;
}

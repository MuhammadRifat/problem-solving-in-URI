#include<stdio.h>
main()
{
    int a,i,x=0,y;
    for(i=1;i<=100;i++){
        scanf("%d",&a);
        if(a>x){
            x=a
            ;
            y=i;
        }

    }
    printf("%d\n%d\n",x,y);
    return 0;
}

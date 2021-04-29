#include<stdio.h>
main()
{
    int y,n,x,a=0,b=0;
    scanf("%d",&y);
    for(n=1;n<=y;n++){
        scanf("%d",&x);
        if(x<=20&&x>=10){
            a++;
        }
        else{
            b++;
        }
    }
    printf("%d in\n%d out\n",a,b);
    return 0;
}

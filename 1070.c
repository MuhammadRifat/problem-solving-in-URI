#include<stdio.h>
main()
{
    int a,i;
    scanf("%d",&a);
    if(a%2==0) a++;
    for(i=1;i<=6;i++){
            printf("%d\n",a);
            a+=2;
    }
    return 0;

}

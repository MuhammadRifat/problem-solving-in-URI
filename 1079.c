#include<stdio.h>
main()
{
    int i,a;
    float x,y,z,sum;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        scanf("%f %f %f",&x,&y,&z);
        sum=(x*2.0+y*3.0+z*5.0);
        printf("%.1f\n",sum/10);

    }
    return 0;
}

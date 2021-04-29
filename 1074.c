#include<stdio.h>
main()
{
    int a,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&a);
    if(a==0)printf("NULL\n");
    else if(a<0){
        if(a%2==0)printf("EVEN NEGATIVE\n");
        else printf("ODD NEGATIVE\n");
    }
    else if(a>0){
        if(a%2==0)printf("EVEN POSITIVE\n");
        else printf("ODD POSITIVE\n");
      }
    }
    return 0;
}

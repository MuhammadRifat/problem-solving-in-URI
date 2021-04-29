#include<stdio.h>
int main()
{
    int n,i,a,b,temp,j,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&a,&b);
        if(a>b){temp=a;a=b;b=temp;}
        if(a%2==0){
            a--;
        }
        a=a+2;
        for(j=a;j<b;j+=2){
            sum=sum+j;

        }
        printf("%d\n",sum);


        sum=0;

    }
    return 0;
}

#include<stdio.h>
int main()
{
    int x,y;
    for(x=1,y=60;y>=0;x+=3,y-=5){
        printf("I=%d J=%d\n",x,y);
    }
    return 0;
}

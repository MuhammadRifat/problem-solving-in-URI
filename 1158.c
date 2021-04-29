#include<stdio.h>
int main()
{
    int x,i,z,j;
    while(1)
    {
        scanf("%d",&x);
        if(x!=0)
        {
            z=0;
            if(x%2!=0)
            {
                x=x+1;
            }
            for(j=0; j<5; j++)
            {
                z=z+x;

                x=x+2;
            }

            printf("%d\n",z);
        }
        else
        {
            break;
        }
    }
    return 0;

}

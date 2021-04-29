#include<stdio.h>
main()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d %d",&x,&y);
    if(x>y )
    {
        printf("%d is Greater",x);
    }
    else if(y>x)
    {
        printf("%d is Greater",y);
    }
    else
    {
        printf("The number is Equal");
    }
    getch();
    return 0;

}

#include<stdio.h>

int test1()
{
    int r, i, j;
    scanf_s("%d", &r);
    for (i = 1;i <= r-1 ;i++)
    {
        for (j = 1;j <= i;j++)
            printf("* ");
        for (j = 1;j <= 2 * (r - i) - 1;j++)
            printf("  ");
        for (j = 1;j <= i;j++)
            printf("* "); 
        printf("\n");
    }
    for (i = r;i <= r ;i++)
    {
        for (j = 1;j <= 2*r-1 ;j++)
            printf("* ");
        printf("\n");
    }
    for (i = r-1;i >= 1;i--)
    {
        for (j = 1;j <= i;j++)
            printf("* ");
        for (j = 1;j <= 2 * (r - i)-1 ;j++)
            printf( "  ");
        for (j = 1;j <= i;j++)
            printf("* ");
        printf("\n");
    }
    return 0;

}

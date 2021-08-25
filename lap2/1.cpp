#include <stdio.h>
int main()
{
         int n, sum = 0, m=10;
         printf("enter a number: ");
         scanf_s("%d", &n);
         while (m / 10 != 0)
         {
             if (n == 0)
             {
                 m = sum;
                 n = sum;
                 sum = 0;
             }
             else
             {
                 sum =sum+ n % 10;
                 n =n/ 10;
             }
         }
         printf("%d", m);
         return 0;
}

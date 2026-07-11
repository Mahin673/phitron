#include<stdio.h>
int main()
{
   int X,Y;
   scanf("%d %d",&X, &Y);
   int Sum = X+Y;
   printf("%d + %d = %d\n", X, Y, Sum);
   int MULT = X*Y;
    printf("%d * %d = %d\n", X, Y, MULT);
    int SUB = X-Y;
    printf("%d - %d = %d\n", X, Y, SUB);
    return 0;
}
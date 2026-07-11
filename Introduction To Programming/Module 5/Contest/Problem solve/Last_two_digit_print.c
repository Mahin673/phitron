#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int last_two_digits = n%100;
   printf("%d",last_two_digits);
    return 0;
}
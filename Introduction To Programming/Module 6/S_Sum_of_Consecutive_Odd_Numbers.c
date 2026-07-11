#include<stdio.h>
int main()
{
   int n,X,Y;
   int sum=0;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
    scanf("%d %d",&X,&Y);
    sum = sum + (Y-X+1)*(X+Y)/2;
    printf("%d\n",sum);
   }



    return 0;
}
//bijor

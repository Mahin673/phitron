#include<stdio.h>
int main()
{
   char ch;
   scanf("%c",&ch);
   if(ch >= 'a' && ch <= 'z')//if(ch == small)a-z
   {
    ch = ch-32;
    printf("%c",ch);
   }
   else{
    ch =ch +32;
    printf("%c",ch);
   }
 
    return 0;
}
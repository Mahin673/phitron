#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    if(a/b == 0)
    {
        printf("YES\n");
    }
    else if(b/a == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    char a[1000001];
    scanf("%s", a);
    int countA = 0, countV = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            countV++;
        }
        else
        {
            countA++;
        }
    }

    printf("%d", countA);
    return 0;
}

#include <stdio.h>
int main()
{
    int pass;

    //jodi for loop use kortam tahole
    //for(;scanf("%d",&pass);) ayta likhte hoto.


    while (scanf("%d", &pass))
    {
        if (pass == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}

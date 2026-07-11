#include <stdio.h>

int main()
{
    long int A;
    long long int B;
    float C;
    char D;

    scanf("%ld %lld %f %c", &A, &B, &C, &D);
    
    printf("%ld\n", A);
    printf("%lld\n", B);
    printf("%f\n", C);
    printf("%c\n", D);

    return 0;
}
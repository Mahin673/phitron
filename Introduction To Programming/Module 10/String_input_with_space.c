#include <stdio.h>

int main()
{
    char s[50];
    // gets(s);  ayta kom use kora hoi karon scanf space er porer word ta read kore na
    fgets(s, 50, stdin); // fgets use kora hoi karon scanf space er porer word ta read kore na
    printf("%s\n", s);
    return 0;
} //input a space thakle fgets use korte hobe.
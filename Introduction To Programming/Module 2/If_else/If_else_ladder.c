#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk>= 100){
        printf("Burger Khabo.");
    }
    else if(tk >= 50){
        printf("Fuchka Khabo.");
    }
    else{
        printf("Kichui khabo na.");
 
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk>= 10000){
        printf("Saint Martin Jabo..");
    }
    else if(tk >= 5000){
        printf("Cox's Bazar jabo.");
    }
    else if( tk >= 2000){
        printf("Dhaka jabo.");
    }
    else{
        printf("Kothao Jabo na.");
 
    }
    return 0;
}
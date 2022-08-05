#include<stdio.h>

int main(){


    char x,upper,lower;
    printf("enter a Lower or upper charector :  ");
    scanf("%c",&x);

    if (x>=65 && x<=96){
        x = x + 32;
        printf("%c",x);
    }
    else if (x>=97 && x<=122){
        x = x - 32;
        printf("%c",x);
    }else{
        printf("Invalid English Word");
    }

    return 0;
}
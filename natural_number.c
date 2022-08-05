#include<stdio.h>

int main(){


    int x;
    printf("Enter A Number : ");
    scanf("%d",&x);

    int y = 0;

    for(int i=0;i<=x;i++){

        y = y + i;

    }
    printf("%d\n%d",y);

    return 0;
}

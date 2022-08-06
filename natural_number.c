#include<stdio.h>

int main(){

    int start,end;
    printf("Enter start Number : ");
    scanf("%d",&start);//input start number
    printf("Enter End NUmber : ");
    scanf("%d",&end);//input end number 

    int main_value = 0;

    for(int worker=start;worker<=end;worker++){
//START TO PLUS START NUMBER TO END NUMBER 
        main_value = main_value +  worker;// main_value = NATURAL + NUMBER

    
    }
    printf("       +             \n%d (+NATURAL+) %d = %d",start,end,main_value);//PRINTED main_value(START + END )

    return 0;
}

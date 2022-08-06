#include<stdio.h>

void yes();
void no();

int main(){

    char a;
    printf("You Started Age Selection ? y/n : ");
    scanf("%c",&a);

    if (a=='y' || a=='Y'){

        yes();
    }
    else{
        no();
    }
    return 0;
}

void yes(){

    int age,you=0;
    printf("Enter Your Age : ");
    scanf("%d",&age);

        if (age>=7 && age< 15){
            printf("chlid");
        }else if (age>=15 && age< 17){
            printf("teenager");
        }else if (age>=18 && age<70){
            printf("Adult");
        }else if (age>=70 && age<100){
            printf("Old Men/Women");
        }else if (age>0 && age<7){
            printf("Kids");
        }else{
            printf("Invalid Age !");
        }

}

void no(){

}
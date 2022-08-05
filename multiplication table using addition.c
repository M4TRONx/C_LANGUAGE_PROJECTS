#include <stdio.h>

int main()
{
    int n,i,a,start,end;

    printf("Enter first number from where you want to start multiplication : \n");
    scanf("%d",&start);// Taking input from user. From where he want to start the table.
    printf("Enter Last number from where you want to end multiplication : \n");
    scanf("%d",&end);// Taking input from user.Where he want to end the table.


    for(n=start; n<=end; n++)
    {
        a=0;
        for(i=1; i<=10; i++)
        {
            a+=n;

            printf("%d x %d = %d\n",n,i,a);

        }
        printf("Multiplication has ended of %d\n\n",n);
    }
    return 0;
}


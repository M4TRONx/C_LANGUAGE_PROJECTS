#include<stdio.h>
int main()
{
    int a= 0,cont_or_not;

    if (a==0)
    {
        continuing:
        for(int a = 0; a==0;)
        {
            int n;
            printf("Enter A Number : ");
            scanf("%d",&n);

            for(int i = 10; i>=1; i--)
            {
                a = n * i;

                printf("%d * %d = %d\n",n,i,a);
                while(i==1)
                {
                    printf("Do you want to continue?\n");
                    printf("1.yes\n");
                    printf("2.No\n");

                    scanf("%d",&cont_or_not);

                    if (cont_or_not==1)
                    {
                        goto continuing;
                    }
                    else if (cont_or_not == 2)
                    {
                        a++;
                        i++;
                    }
                }
            }
        }
    }
    return 0;
}
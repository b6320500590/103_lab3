#include<stdio.h>

int main()
{
    int n, i=2;

    scanf("%d", &n);

    while(n>1)
    {

        if(n%i==0)
        {
            n = n/i;
            printf("%d\n", i);

            if(n==1)
                printf("%d", n-1);
        }
        else
            i++;

    }
    return 0;
}


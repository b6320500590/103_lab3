#include<stdio.h>

int main()
{
    int n, a ,i=2, j=0, t=0, b=0;

    scanf("%d",&n);

    a = n;

    while(n>1)
    {
        if(n%i==0)
        {
            n=n/i;

            if(t==i)
                b=1;

            t=i;
            j++;
        }
        else
            i++;
    }

    if(j==3 && b==0)
        printf("%d is a Lucky Number.", a);
    else
        printf("%d is not a Lucky Number.", a);

    return 0;
}






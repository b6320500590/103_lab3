#include<stdio.h>

int main ()

{
    int i, j, x, a;

    scanf("%d", &x);

    for(i=1; i<=x; i++)
    {
        for(j=2; j<=i ;j++)
            if(i%j==0)
                break;
        if(i==j)
            a = i;
    }

    printf("%d", a);

    return 0;
}



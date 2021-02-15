#include<stdio.h>

int main()
{
    int i, j, a[4],t[5];
    for(i=0; i<5; i++)
    {
        for(j=0; j<4; j++)
            scanf("%d", &a[j]);

        t[i]=a[0]+a[1]+a[2]+a[3];
    }

    int n, rank, max=0;

    for(n=0; n<5; n++)
    {
        if(max<t[n])
        {
            max=t[n];
            rank=n+1;
        }
    }
    printf("%d %d",rank ,max);

    return 0;
}

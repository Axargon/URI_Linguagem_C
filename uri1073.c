#include<stdio.h>

void evs(int n)
{
    int i;
    for (i=1; i<=n; i++){
        if (i%2==0)
        printf("%d^2 = %d\n", i, i*i);
    }
}

int main()
{
    int p=0;
    scanf("%d", &p);
    evs(p);
    return 0;
}

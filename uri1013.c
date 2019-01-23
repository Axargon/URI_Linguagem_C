#include <stdio.h>

int greatest (int a, int b)
{
    int maior = (a+b+(abs(a-b)))/2;
    return maior;
}
int main()
{
    int a,b,c;
    scanf("%d""%d""%d", &a, &b, &c);

    int MaiorAB= greatest(greatest(a,b),c);
    
    printf("%d eh o maior\n",MaiorAB);
    
    return 0;
}

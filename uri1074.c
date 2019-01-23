#include <stdio.h>

void test(int n)
{
    if(n<0 && n%2==0)
        printf("EVEN NEGATIVE\n");
    else
        if(n<0 && n%2 !=0)
          printf("ODD NEGATIVE\n");
    else
        if(n==0)
          printf("NULL\n");
    else 
        if(n>0 && n%2==0)
          printf("EVEN POSITIVE\n");
    else
          printf("ODD POSITIVE\n");
}


int main()
{
    int tam, i ;
    scanf("%d",&tam);
    int v[tam];
    for (i=0;i<tam;i++){
        scanf("%d",&v[i]);
    }
    for (i=0;i<tam;i++){
        test(v[i]);
    }
    return 0;
}

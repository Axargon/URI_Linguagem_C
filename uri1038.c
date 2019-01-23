#include<stdio.h>

void total (int item, int quant)
{
    float preco=0;
    switch(item)
    {
        case 1:
        preco=4.0;
        break;
        case 2:
        preco=4.5;
        break;
        case 3:
        preco=5.0;
        break;
        case 4:
        preco=2.0;
        break;
        case 5:
        preco=1.5;
        break;
    }
    
    printf("Total: R$ %.2f\n",quant*preco);
}

int main()
{
    int it, qt;
    scanf("%d %d",&it,&qt);
    total(it, qt);
   return 0; 
}

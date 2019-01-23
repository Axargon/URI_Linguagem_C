#include <stdio.h>

struct perf {
    float sfixo;
    float vfeitas;
    char nome[20];
};

int main()
{
    struct perf vendedor;
    scanf("%s %f %f",vendedor.nome, &vendedor.sfixo,&vendedor.vfeitas);
    printf("TOTAL = R$ %.2f\n", vendedor.sfixo+(vendedor.vfeitas*0.15));
    return 0;
}

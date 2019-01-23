#include <stdio.h>

int main(){
    float so, sr;
    int per;
    char x= '%';
    scanf("%f",&so);
    
    if (so<=400.00){ sr=so*1.15; per=15;}
    else if (so>400.00 && so<=800.00){ sr=so*1.12; per=12;}
    else if (so>800.00 && so<=1200.00){ sr=so*1.10; per=10;}
    else if (so>1200.00 && so<=2000.00){ sr=so*1.07; per=7;}
    else { sr=so*1.04; per=4;}
    
    
    printf("Novo salario: %.2f\n",(sr));
    printf("Reajuste ganho: %.2f\n",(sr-so));
    printf("Em percentual: %d %c\n",per,x);

    return 0;
}

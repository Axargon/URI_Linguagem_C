#include <stdio.h>

int main(){
    unsigned int m;
    scanf("%u",&m);
    
    printf("%u\n",m);
    printf("%u nota(s) de R$ 100,00\n",m/100);
    m=m%100;
    printf("%u nota(s) de R$ 50,00\n",m/50);
    m=m%50;
    printf("%u nota(s) de R$ 20,00\n",m/20);
    m=m%20;
    printf("%u nota(s) de R$ 10,00\n",m/10);
    m=m%10;
    printf("%u nota(s) de R$ 5,00\n",m/5);
    m=m%5;
    printf("%u nota(s) de R$ 2,00\n",m/2);
    m=m%2;
    printf("%u nota(s) de R$ 1,00\n",m);
    

 return 0;
}

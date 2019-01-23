#include <stdio.h>

int main(){
    double r;
    int m;
    scanf("%lf",&r);
    
    r=r*100;
    m=(int)r;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",m/10000);
    m=m%10000;
    printf("%d nota(s) de R$ 50.00\n",m/5000);
    m=m%5000;
    printf("%d nota(s) de R$ 20.00\n",m/2000);
    m=m%2000;
    printf("%d nota(s) de R$ 10.00\n",m/1000);
    m=m%1000;
    printf("%d nota(s) de R$ 5.00\n",m/500);
    m=m%500;
    printf("%d nota(s) de R$ 2.00\n",m/200);

    printf("MOEDAS:\n");
    m=m%200;
    printf("%d moeda(s) de R$ 1.00\n",m/100);
    m=m%100;
    printf("%d moeda(s) de R$ 0.50\n",m/50);
    m=m%50;
    printf("%d moeda(s) de R$ 0.25\n",m/25);
    m=m%25;
    printf("%d moeda(s) de R$ 0.10\n",m/10);
    m=m%10;
    printf("%d moeda(s) de R$ 0.05\n",m/5);
    m=m%5;
    printf("%d moeda(s) de R$ 0.01\n",m);
    
    return 0;
}

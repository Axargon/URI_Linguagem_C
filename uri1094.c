#include <stdio.h>

int main(){
    int n,i;
    int qt=0,co=0,ra=0,sa=0,to=0;
    char tipo, p='%';
    
    scanf("%d",&n);
    
    for (i=0; i<n; i++){
        
        scanf("%d %c",&qt,&tipo);
        
        if(tipo=='C'){  co=co+qt; }
        if(tipo=='S'){  sa=sa+qt; }
        if(tipo=='R'){  ra=ra+qt; }
        
        to=to+qt;
    }
    
    printf("Total: %d cobaias\n", to);
    printf("Total de coelhos: %d\n", co);
    printf("Total de ratos: %d\n", ra);
    printf("Total de sapos: %d\n", sa);
    printf("Percentual de coelhos: %.2f %c\n",((float)co/(float)to)*100,p);
    printf("Percentual de ratos: %.2f %c\n",((float)ra/(float)to)*100,p);
    printf("Percentual de sapos: %.2f %c\n",((float)sa/(float)to)*100,p);
    
  return 0;
}

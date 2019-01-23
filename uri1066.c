#include <stdio.h>

int main(){
    int a[5];
    int i=0, par=0,imp=0,neg=0,pos=0;
    
        while (i!=5){
            scanf("%d",&a[i]);
             if(a[i]%2==0) par++;
             if(a[i]%2!=0) imp++;
             if(a[i]<0) neg++;
             if(a[i]>0) pos++;
             i++;
        }
    
    printf("%d valor(es) par(es)\n",par);
    printf("%d valor(es) impar(es)\n",imp);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);

  return 0;
}

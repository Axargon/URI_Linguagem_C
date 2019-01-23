#include <stdio.h>

int main(){
    int i, pos=0, maior=0;
    int v[100];
    
        for(i=1;i<=100;i++){
            scanf("%d",&v[i]);
            
            if(v[i]>maior){
                pos=i;
              maior=v[i];
            } 
        }
    printf("%d\n%d\n",maior,pos);
  return 0;
}

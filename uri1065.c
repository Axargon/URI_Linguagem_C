#include <stdio.h>

int main(){
    int a[5];
    int i, q=0;
    
        for(i=0;i<5;i++){
            scanf("%d",&a[i]);
            if(a[i]%2==0){
                q++;
            }  
        }
    
    printf("%d valores pares\n",q);

  return 0;
}

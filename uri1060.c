#include <stdio.h>

int main(){
    float a[6];
    int i, p=0;
    
        for(i=0;i<6;i++){
            scanf("%f",&a[i]);
            if(a[i]>0) p++; 
        }
    
    printf("%d valores positivos\n",p);

  return 0;
}

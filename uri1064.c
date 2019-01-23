#include <stdio.h>

int main(){
    float a[6];
    float sm=0;
    int i, p=0;
    
        for(i=0;i<6;i++){
            scanf("%f",&a[i]);
            if(a[i]>0){
                p++;
                sm=sm+a[i];
            }  
        }
    
    printf("%d valores positivos\n%.1f\n",p,(sm/p));

  return 0;
}

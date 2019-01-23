#include <stdio.h>

void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    
    int d[3];
    int o[3];
    int i,j;
    
    for (i=0;i<3;i++){
        scanf("%d",&d[i]);
        o[i]=d[i];
    }

    for (i=0;i<3;i++){
        for (j=i+1;j<3;j++){
            if (d[i]>d[j]){
                swap(&d[i],&d[j]);
            }
        }
    }
    
    for (i=0;i<3;i++) printf("%d\n",d[i]);
    
    printf("\n");
    
    for (i=0;i<3;i++) printf("%d\n",o[i]);
    
 
    return 0;
}

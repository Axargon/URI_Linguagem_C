#include <stdio.h>

int main(){
    int i,j,n;
    float media;
    scanf("%d",&n);
    
    float m[n][3];
    
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            scanf("%f",&m[i][j]);
        }
    }
    
    for(i=0;i<n;i++){
        media=0;
        for(j=0;j<3;j++){
            if(j==0){
                media=(m[i][j]*0.2);
            }
            if(j==1){
                media=media+(m[i][j]*0.3);
            }
            if(j==2){
                media=media+(m[i][j]*0.5);
                printf("%.1f\n",media);
            }
        }
    }
  return 0;
}

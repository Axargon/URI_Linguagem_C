#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    
    int max=230;
    int ct,i,j,w;/
    scanf("%d",&ct);
    int mat[ct][max];
    
    for (i=0;i<ct;i++){
        for(j=0;j<max;j++){
          mat[i][j]=0;  
        }
    }

    for(i=0;i<ct;i++){
        int qtp;
        scanf("%d",&qtp);
            for (j=0;j<qtp;j++){
               int pos;
               scanf("%d",&pos);
                  mat[i][pos]++;
        }
    }
    
     for (i=0;i<ct;i++){
        for(j=0;j<max;j++){
            if(mat[i][j]!=0){
             for(w=0;w<mat[i][j];w++)
              printf("%d ",j);
            }
        }
        printf("\n"); 
    }
    
 return 0;
}

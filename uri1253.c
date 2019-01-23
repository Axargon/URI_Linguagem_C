#include <stdio.h>

int main (int argc, char *argv[]){
    
    int n, i,j;
    scanf("%d",&n);

    
    for (i=0;i<n;i++){
        char sent[80];
        int chv, cod=0;
        
        scanf("%s",sent);
        scanf("%d",&chv);
            //printf("%d\n",chv);
           for(j=0;j<80;j++){
               if(sent[j]=='\0'){
                   break;
               }
               if((sent[j]-chv)<65){
                   cod=((sent[j]-chv)+26);
               }
               else{
                    cod=sent[j]-chv;
                    //printf("%d ",cod);
               }
            printf("%c",cod);
           }
        
        printf("\n");
    }
    
    return 0;
}

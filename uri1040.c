#include <stdio.h>

int main(){
    float n1,n2,n3,n4,n5,media;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    
      media=(n1*0.2)+(n2*0.3)+(n3*0.4)+(n4*0.1);
      printf("Media: %.1f\n", media);
      
        if(media>=7.0){
            printf("Aluno aprovado.\n");
        }
        else if(media<5.0){
            printf("Aluno reprovado.\n");
        }
        else{
            printf("Aluno em exame.\n");
            scanf("%f",&n5);
            printf("Nota do exame: %.1f\n",n5);
            media=(media+n5)/2;
            
             if(media>=5) {printf("Aluno aprovado.\nMedia final: %.1f\n",media);}
             else {printf("Aluno aprovado.\nMedia final: %.1f\n",media);}
        }

    return 0;
}

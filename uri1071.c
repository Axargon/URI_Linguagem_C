#include <stdio.h>

int main(){
    int menor,maior,i,soma=0;
    scanf("%d %d",&menor,&maior);
    
    if(menor>maior){
        int temp;
        temp=menor;
        menor=maior;
        maior=temp;
    }
    
   for(i=(menor+1);i<maior;i++){
       
        if ((i%2)==1||(i%2)==-1){
            soma=soma+i;
        }
    }
    
    printf("%d\n",soma);

  return 0;
}

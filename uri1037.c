#include <stdio.h>

int main(){
    float e;
    scanf("%f",&e);
    
        if(e>=0 & e<=25){printf("Intervalo [0,25]\n");}
        if(e>25 & e<=50){printf("Intervalo (25,50]\n");}
        if(e>50 & e<=75){printf("Intervalo (50,75]\n");}
        if(e>75 & e<=100){printf("Intervalo (75,100]\n");}
        if(e<0 | e>100) {printf("Fora de intervalo\n");}
  
    return 0;
}

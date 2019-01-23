#include <stdio.h>
#include <string.h>


int main(){
    float s, d;
    scanf("%f",&s);
    
    if(s<=2000.00){
        printf("Isento\n");
    }
    else{
        if(s>2000.00 && s<=3000.00){d=(s-2000.00)*0.08;}
        if(s>3000.00 && s<=4500.00){d=(1000.00*0.08)+((s-3000.00)*0.18);}
        if(s>4500.00){d=(1000*0.08)+(1500.00*0.18)+((s-4500)*0.28);}
    
        printf("R$ %.2f\n",d);
    }

  return 0;
}

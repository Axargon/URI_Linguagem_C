#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c,x1,x2,dta;
    scanf("%lf %lf %lf",&a,&b,&c);
    
    dta=pow(b,2)-4*a*c;
    
        if(dta<0 | (a==0)){
            printf("Impossivel calcular\n");
        }
        else{
            x1=(-b+sqrt(dta))/(2*a);
            x2=(-b-sqrt(dta))/(2*a);
            printf("R1 = %.5lf\nR2 = %.5lf\n",x1,x2);
        }
  
    return 0;
}

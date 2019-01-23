#include <stdio.h>

void swap(float *p, float *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}


int main(){
    float a,b,c, maior;
    scanf("%f %f %f",&a,&b,&c);
    
        //escolher o maior dos tres valores e colocar no valor a
        if (b>a){  swap(&a,&b);  }
   
        if (c>a){  swap(&a,&c);  }
        
    /*testar se os tres valores formam um triangulo e decidir 
    se calcula area ou perimetro*/
    if (a<(b+c)){        //se o lado a for menor que a soma dos outros dois 
        printf("Perimetro = %.1f\n",(a+b+c));
    }
    
    else{
        printf("Area = %.1f\n",((a+b)*c)/2);
    }
    
    return 0;
}

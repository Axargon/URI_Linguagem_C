#include <stdio.h>

int main()
{   
    struct triangulo{
        double hypquad;
        double somCatquad;
    };
    double a,b,c,t;
    scanf("%lf %lf %lf",&a,&b,&c); //recebe tres valores do usuário
    
    if (b>a){t=a;a=b;b=t;}//atribui o maior valor entre as duas primeiras entradas a "a"
    if (c>a){t=a;a=c;c=t;}//atribui o maior valor entre a primeia e a terceira entrada a "a"
    
    if (a>=(b+c)){ printf("NAO FORMA TRIANGULO\n");}// quesito para contruir uma estrutura
        else {
            struct triangulo t;
            t.hypquad=a*a;
            t.somCatquad=(b*b)+(c*c);
            //printf("hypquad= %lf catsquad= %lf\n",t.hypquad, t.somCatquad);
            if(t.hypquad==t.somCatquad) {printf("TRIANGULO RETANGULO\n");}
            if(t.hypquad>t.somCatquad) {printf("TRIANGULO OBTUSANGULO\n");}
            if(t.hypquad<t.somCatquad) {printf("TRIANGULO ACUTANGULO\n");}
             
             //printf("a=%lf b=%lf c=%lf\n", a,b,c);
             if (a==b && b==c) printf("TRIANGULO EQUILATERO\n");
             if ((a!=b && b==c)||(a==b && b!=c)||(a==c && b!=c)) printf("TRIANGULO ISOSCELES\n");
        }
   
    
    
    //printf("a=%lf b=%lf c=%lf\n", a,b,c);
    return 0; 
}

#include <stdio.h>
#include <math.h>

struct ponto {
        double x;
        double y;
    };
typedef struct ponto pt;

double distancia(pt p1, pt p2){
    return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
    }

int main()
{
    pt p,q;
       
    scanf("%lf %lf %lf %lf",&p.x, &p.y, &q.x, &q.y);
    printf("%.4lf\n", distancia(p,q));
    
    return 0;
}

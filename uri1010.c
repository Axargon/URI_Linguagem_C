#include <stdio.h>

int main(){
	int c1,q1,c2,q2;
	double p1,p2,total;
	scanf("%d",&c1);
	scanf("%d",&q1);
	scanf("%lf",&p1);
	scanf("%d",&c2);
	scanf("%d",&q2);
	scanf("%lf",&p2);

	total=(q1*p1)+(q2*p2);

	printf("VALOR A PAGAR: R$ %.2lf\n",total);
	
return 0;
}

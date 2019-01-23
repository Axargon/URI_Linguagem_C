#include <stdio.h>
 
char pilha[50] = { 'F', 'A', 'C', 'E' };
 
int main(int argc, char const *argv[]) {
	int n,i,count= 0, top = 4;
	char l1[2], l2[2], l3[2], l4[2];
	
	scanf("%d", &n);
	for ( i = 0; i < n; ++i) {
		scanf("%s%s%s%s", l1, l2, l3, l4);
		if (l1[0] == pilha[top-1] &&
		    l2[0] == pilha[top-2] &&
		    l3[0] == pilha[top-3] &&
		    l4[0] == pilha[top-4]) {
			 top -= 4;
			   if (top == 0){
			      pilha[0] = 'F';
			      pilha[1] = 'A';
			      pilha[2] = 'C';
			      pilha[3] = 'E';
			         top= 4; 
			   }
			count++;
		}
		else {
			pilha[top] = l1[0], top++;
			pilha[top] = l2[0], top++;
			pilha[top] = l3[0], top++;
			pilha[top] = l4[0], top++;
		}
	}
	
	printf("%d\n", count);
	return 0;
}

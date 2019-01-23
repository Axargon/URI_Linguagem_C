#include <stdio.h>
#include <stdlib.h>

static short Queue[1000], head, tail;
static short G[1000][1000];
static short grupo[1000];

short dequeue();
short BFS( short n, short s );


int main(){
    
    short n, i, j, verif;

    scanf("%hd", &n);

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%hd", &G[i][j]);
        }
    }    
    
    /* verificar cada orca que não estiver em um grupo */
    for(i=0; i<n; i++){
        if( grupo[i] == 0 ){
            verif = BFS(n, i);
            if( verif == 0 ) break;            
        }
    }
    
    if(verif == 1)
        printf("Bazinga!\n");
    else
        printf("Fail!\n");    

    return 0;
}


short dequeue(){
	short x = Queue[head];
	if( head == 999 ) head = 0;
	else head++;
	return x;
}

short enqueue( short x){
	Queue[tail] = x;
	if( tail == 999 ) tail = 0;
	else tail++;	
}


short BFS( short n, short s){

    short v, i;

    head = tail = 0;
    grupo[s] = 1; /* colocar s no grupo 1 */
    
    enqueue(s);
    while( head != tail ){

        v = dequeue();

        for(i=0; i<n; i++){

        	/* se i não esta em nenhum grupo */
        	if(grupo[i] == 0 && G[v][i] == 0){
            	/* colocar i no grupo oposto de v */
	            grupo[i] = grupo[v] % 2 + 1; 	            	            
	            enqueue(i);
            }
            /* se i e v estão no mesmo grupo e v não fala com i */
            else if(grupo[i] == grupo[v] && G[v][i] == 0){
                return 0;
            }

        }
    }

    return 1;
}

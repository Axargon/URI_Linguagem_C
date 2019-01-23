#include <stdio.h>
#include <stdlib.h>

static int Queue[56], head, tail;
static int quantMov[64], visitou[64];

int dequeue();
int BFS(int *quadradosSE);

int main(){
    
    int i, v, quadradosSE[4];

    char p1[3], p2[3];
    while( scanf("%s %s", p1, p2) != EOF ){
        
        /* using ASCII */
        quadradosSE[0] = p1[0] - 97;
        quadradosSE[1] = p1[1] - 49;
        quadradosSE[2] = p2[0] - 97;
        quadradosSE[3] = p2[1] - 49;

        v = BFS(quadradosSE);
        
        printf("To get from %s to %s takes %d knight moves.\n", p1, p2, v);
    }

    return 0;
}

int dequeue(){
	int x = Queue[head];
	if( head == 63 ) head = 0;
	else head++;
	return x;
}

int enqueue( int x){
	Queue[tail] = x;
	if( tail == 63 ) tail = 0;
	else tail++;	
}

int BFS( int *quadradosSE ){

    int s = 8*quadradosSE[1] + quadradosSE[0]; //Start
    int e = 8*quadradosSE[3] + quadradosSE[2]; //End

    head = tail = 0;
    visitou[s] = 1;
    int v = s;

    int i, li = 0, ci = 0, lv = 0, cv = 0;

    for( i=64; i--; ){
    	quantMov[i] = 0;
     	visitou[i] = 0;
    }

    enqueue(s);
    while( visitou[e] == 0 ){

        v = dequeue();
        
        /* pisicao de referencia */
        /* l: linha, c: coluna (do tabuleiro)*/
        lv = v / 8;
        cv = v % 8;

        for(i=0; i<64; i++){

        	/* posição havaliada */
        	/* l: linha, c: coluna (do tabuleiro)*/
            li = i / 8;
            ci = i % 8;

            /* sim se não visitou e se um movimento valido */
            if( visitou[i] == 0 &&
                    ((lv + 2 == li && cv + 1 == ci) ||
                     (lv + 2 == li && cv - 1 == ci) ||
                     (lv - 2 == li && cv + 1 == ci) ||
                     (lv - 2 == li && cv - 1 == ci) ||
                     (lv + 1 == li && cv + 2 == ci) ||
                     (lv + 1 == li && cv - 2 == ci) ||
                     (lv - 1 == li && cv + 2 == ci) ||
                     (lv - 1 == li && cv - 2 == ci))){

            	/* marcar como visitou */
                visitou[i] = 1;
            	/* contagem dos movimentos */
                quantMov[i] = quantMov[v] + 1;
                /* enpilhar para posterior havaliação */
                enqueue(i);
            }
        }

    }

    return quantMov[e];
}

#include <stdio.h>

int converMin(int a, int b){
    return (a*60)+b;
}

int main(){
    int hi,mi,hf,mf, c1,c2;
    scanf("%d %d %d %d",&hi,&mi,&hf,&mf);
    
    c1=converMin(hi, mi);
    c2=converMin(hf,mf);
    
    if (hi==hf && mi==mf) printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else if(hi==hf && mf>mi){
        printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",(mf-mi));
    }
    else if(hi==hf && mf<mi){
        printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n",60-(mi-mf));
    }
    else if(hf>hi){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(c2-c1)/60,(c2-c1)%60);
    }
    else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",((24*60)-(c1-c2))/60,(((24*60)-(c1-c2))%60));
    }

    return 0;
}

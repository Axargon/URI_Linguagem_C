#include <stdio.h>

int main(){
    int n,i,in=0,out=0;
    scanf("%d",&n);
    
    int ent[n];
        
    for(i=0;i<n;i++){
        scanf("%d",&ent[i]);
            if(ent[i]>=10 && ent[i]<=20){
                in++;
            }
            else{
                out++;
            }
    }
    printf("%d in\n%d out\n",in,out);

  return 0;
}

#include <stdio.h>
#include <string.h>


int main(){
    char l1[20], l2[20], l3[20];
    scanf("%s %s %s",l1,l2,l3);
    
    if(strcmp(l1,"vertebrado")==0){
        if(strcmp(l2,"ave")==0){
            if(strcmp(l3,"carnivoro")==0){
                printf("aguia\n");
            }
            else{
                printf("pomba\n");
            }
            
        }
        else{
            if(strcmp(l3,"onivoro")==0){
                printf("homem\n");
            }
            else{
                printf("vaca\n");
            }
            
        }
    }
    else{
        if(strcmp(l2,"inseto")==0){
            if(strcmp (l3,"hematofago")==0){
                printf("pulga\n");
            }
            else{
                printf("lagarta\n");
            }
            
        }
        else{
            if(strcmp (l3,"hematofago")==0){
                printf("sanguessuga\n");
            }
            else{
                printf("minhoca\n");
            }
            
        }
    }
    
    return 0;
}

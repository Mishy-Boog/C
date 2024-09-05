#include <stdio.h>
#include <stdlib.h>


int main(){
    int vet[8], num, achei=0;
    
    for(int i=0; i<8; i++){
        
        printf("\n Digite o elemento da posição %d:", i+1);
        scanf("%d", &vet[i]);
    }
        printf("\n Qual o numero que deseja buscar?:");
        scanf("%d", &num);
        
        for(int i=0; i<8; i++){
            if(vet[i]==num){
                printf("\nO numero %d apareceu na %dº posição", num, i+1);
                achei=1;
            }
        }
        if(achei!=1){
        printf("\n Elemento não foi encontrado");
        }
    return 0;
}

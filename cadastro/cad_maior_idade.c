#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define C 5

typedef struct{
    int id;
    int idade;
    float renda;
    char nome[40];
}cad;

int main(){
    cad clie[C];
    int maisv = 0;
    
    printf("Bem vindo!!!");
    
    for(int i=0; i<C; i++){
        printf("\nDigite o id do %dº cliente: ", i+1);
        scanf("\n%d", &clie[i].id);
        printf("\nDigite a idade do %dº cliente: ", i+1);
        scanf("\n%d", &clie[i].idade);
        printf("\nDigite a renda do %dº cliente: ", i+1);
        scanf("\n%f", &clie[i].renda);
        
        getchar();
        printf("\nDigite o nome do %dº cliente: ", i+1);
         gets(clie[i].nome);
    }
    for(int i=0; i<C; i++){
        if(clie[i].idade >= 18){
            maisv++;
        }
    }
    printf("\n%d são maiores de idade\n", maisv);

    return 0;
}

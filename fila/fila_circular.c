#include <stdio.h>
#include <stdlib.h>

#define MAX 5 

typedef struct {
    int vet[MAX];
    int frente;
    int atras;
    int tam;
} filaCircular;

void iniciar(filaCircular* q) {
    q->frente = 0;
    q->atras = -1;
    q->tam = 0;
}

int vazia(filaCircular* q) {
    return q->tam == 0;
}

int cheia(filaCircular* q) {
    return q->tam == MAX;
}

void adiciona(filaCircular* q, int valor) {
    if (cheia(q)) {
        printf("Fila cheia! Não é possível adicionar mais elementos.\n");
        return;
    }
    q->atras = (q->atras + 1) % MAX;
    q->vet[q->atras] = valor;
    q->tam++;
}

int retira(filaCircular* q) {
    if (vazia(q)) {
        printf("Fila vazia! Não há elementos para remover.\n");
        return -1;
    }
    int valor = q->vet[q->frente];
    q->frente = (q->frente + 1) % MAX;
    q->tam--;
    return valor;
}

void imprima(filaCircular* q) {
    if (vazia(q)) {
        printf("Fila vazia!\n");
        return;
    }
    printf("Elementos da fila: ");
    for (int i = 0; i < q->tam; i++) {
        int indice = (q->frente + i) % MAX;
        printf("%d ", q->vet[indice]);
    }
    printf("\n");
}

int main() {
    filaCircular q;
    iniciar(&q);

    int valor;

    while (!cheia(&q)) {
        printf("Digite um valor para adicionar à fila (ou um valor negativo para parar): ");
        if (scanf("%d", &valor) != 1) {
            printf("Entrada inválida. Por favor, insira um número inteiro.\n");
            while (getchar() != '\n'); 
            continue; 
        }

        if (valor < 0) {
            break;
        }

        adiciona(&q, valor);
    }

    imprima(&q);

    printf("Removendo elementos...\n");
    for (int i = 0; i < 2; i++) { 
        if (!vazia(&q)) {
            valor = retira(&q);
            printf("Elemento removido: %d\n", valor);
        }
    }

    imprima(&q);
  
    printf("Adicionando mais elementos...\n");
    while (!cheia(&q)) {
        printf("Digite um valor para adicionar à fila (ou um valor negativo para parar): ");
        if (scanf("%d", &valor) != 1) {
            printf("Entrada inválida. Por favor, insira um número inteiro.\n");
            while (getchar() != '\n'); 
            continue; 
        }

        if (valor < 0) {
            break;
        }

        adiciona(&q, valor);
    }
    imprima(&q);

    return 0;
}

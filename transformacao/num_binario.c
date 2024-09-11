#include <stdlib.h>
#include <stdio.h>

void binario(int n){
    if(n == 0)
        printf("%d", n);
    
    else{
        binario(n/2);
        printf("%d", n % 2);
    }
}

int main() {
    int n;
    
    printf("Digite um valor decimal: ");
    scanf("%d", &n);
    
    binario(n);
    
    return 0;
}

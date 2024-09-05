#include <stdio.h>
#include <stdlib.h>

int main(){
    float real, dolar, cota;
    
    do{ 
        printf("\nInsira sua quantidade de dolares:");
        scanf("%f", &dolar);
        if (dolar <=0){
        break;
        }
        
    printf("\n Informe a cotação atual:");
    scanf("%f", &cota);

    real= (dolar * cota);
    printf("O valor em reais é: %.2f \n", real);
}while (dolar !=0);
return 0;
}

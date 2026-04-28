#include <stdio.h>

int main() {
    int altura = -1, meio = altura/2;
    int cont_aux = 1;
    
    while(altura <= 0 || altura%2 == 0) {
        printf("Digite um número inteiro impar: "); // Entrada do usuário
        scanf("%d", &altura);
        
        if(altura < 0) {
            printf("Digite um número positivo\n"); // Validação da entrada
        }
    }
    
    // Laço principal que desenha a parte superior
    for (int i = 0; i < altura/2; i++) {
        // Desenha o primeiro '*'
        if(i == 0) {
            meio = altura/2; // Define o meio da matriz
            for(int j = 0; j < altura/2; j++) { // Alinha o primeiro asterisco
                printf(" ");
            }
            printf("*\n");
            meio--; // Reduz a distancia para os proximos '*'
            continue; // Pula a execução
        }
        // Alinha o '*'
        for(int j = 0; j < meio; j++) {
            printf(" ");
        }
        meio--; // Reduz a distancia para os proximos '*'
        printf("*");
        
        // Cria o oco no losango
        for(int j = 0; j < cont_aux; j++) {
            printf(" ");
        }
        printf("*\n");
        
        //Esse acrescimo serve para definir o espaço oco entre os próximos '*'
        cont_aux += 2;
    }

    // Laço secundário que desenha a parte inferior
    for(int i = 0; i < altura/2 + 1; i++) {
        if(i == altura/2) {
            for(int j = 0; j < meio; j++) {
                printf(" ");
            }
            printf("*");
            continue;
        }
        for(int j = 0; j < meio; j++) {
            printf(" ");
        }
        meio++;
        printf("*");
        for(int j = 0; j < cont_aux; j++) {
            printf(" ");
        }
        printf("*\n");
        cont_aux -= 2;
        
    }
    return 0;
}
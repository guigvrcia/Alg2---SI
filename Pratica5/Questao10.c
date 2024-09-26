#include <stdio.h>
#include <stdlib.h>

//Cria função para gerar triângulo:
void gerarTriangulo(int N) {
    for (int i = 0; i < N; i++) {
        // Imprime os espaços à esquerda
        for (int j = 0; j < N - i - 1; j++) {
            printf(" ");
        }
        
        // Imprime os asteriscos
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        
        // Pula para a próxima linha
        printf("\n");
    }
}

int main() {
    int N;

    // Ler o valor de n
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    // Gerar o triângulo
    gerarTriangulo(N);

    return 0;
}

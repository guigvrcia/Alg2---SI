#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool ehPrimo(int numero) {
    if (numero <= 1) return false;
    if (numero == 2) return true; // 2 é primo
    if (numero % 2 == 0) return false; // Números pares maiores que 2 não são primos
    for (int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0) return false;
    }
    return true;
}

int main() {
    int tamanho = 1;
    int quantidade = 0;
    int numero;
    int escolha;

    // Alocando memória inicial para o vetor
    int *vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Memoria nao pode ser alocada.\n");
        return 1;
    }

    // Criando o menu para a inserção dos números primos
    while (1) {
        printf("Menu:\n");
        printf("1. Inserir numero primo\n");
        printf("2. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        if (escolha == 2) {
            break;
        } else if (escolha == 1) {
            printf("Digite um numero primo: ");
            scanf("%d", &numero);

            if (!ehPrimo(numero)) {
                printf("Numero nao e primo. Tente novamente.\n");
                continue;
            }

            // Realocar o vetor para adicionar espaço para mais um valor
            vetor = (int *)realloc(vetor, (quantidade + 1) * sizeof(int));
            if (vetor == NULL) {
                printf("Memoria nao pode ser realocada.\n");
                return 1;
            }

            // Inserir o número na posição correta para manter a ordem crescente
            int i;
            for (i = quantidade - 1; (i >= 0 && vetor[i] > numero); i--) {
                vetor[i + 1] = vetor[i];
            }
            vetor[i + 1] = numero;
            quantidade++;
        } else {
            printf("Opcao invalida. Tente novamente.\n");
        }
    }

    // Imprimir os números armazenados no vetor
    printf("Numeros primos armazenados:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Liberar a memória alocada
    free(vetor);
    return 0;
}

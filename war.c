

#include <stdio.h>
#include <string.h>

/*
    Definição da struct Territorio
    Essa estrutura agrupa informações relacionadas a um território:
    - nome do território
    - cor do exército
    - quantidade de tropas
*/
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    // Declaração de um vetor de 5 territórios
    struct Territorio territorios[5];

    int i;

    printf("=== Cadastro de Territórios ===\n\n");

    /*
        Laço para entrada de dados
        O usuário irá cadastrar 5 territórios
    */
    for (i = 0; i < 5; i++) {
        printf("Território %d\n", i + 1);

        printf("Nome do território: ");
        scanf(" %[^\n]", territorios[i].nome);

        printf("Cor do exército: ");
        scanf(" %s", territorios[i].cor);

        printf("Quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }

    /*
        Exibição dos dados cadastrados
        Percorre o vetor de structs e mostra as informações
    */
    printf("=== Territórios Cadastrados ===\n\n");

    for (i = 0; i < 5; i++) {
        printf("Território %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
        printf("-----------------------------\n");
    }

    return 0;
}

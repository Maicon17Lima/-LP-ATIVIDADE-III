#include <stdio.h>
#include <string.h>
#include <locale.h>


int main() {
    

    char nome[9999];
    int numero[9999];
    int opcao;
    int i, j;


// Aadicionando contato.


    do {
        printf("\nEscolha uma opção:\n");
        printf("1. Adicionar contato\n");
        printf("2. Mostrar contatos cadastrados\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
               for ( i = 0; i < 9999; i++)
{
     printf("Digite o nome do contato: ");
        scanf("%s", &nome);

        for (i = 0; i < 9999; j++)
        {
            printf("Digite o número de telefone: ");
        scanf("%d", numero);
    
           
        }
        
        
    }
                break;
            case 2:
                printf("Agenda: ", nome, numero);
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}

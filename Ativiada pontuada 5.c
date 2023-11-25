#include <stdio.h>
#include <string.h>

int main() {
    
    int opcao = 0;
    char nome[9999];
    float preco[9999];
    int quantidade[9999];
    int contador = 0;
    int i,j,k;
    float total =0;
    int vendas;

    while (opcao != 2) {
        printf("Menu:\n");
        printf("1 - Adicionar venda\n");
        printf("2 - Sair e exibir o total de vendas\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (opcao) {
                    for ( i = 0; i < 9999; i++){
                    printf("Nome do produto: ");
                    scanf("%s", &nome);
                    contador++;
                    
                    printf("Preco: ");
                    scanf("%f", &preco);
            
                    printf("Quantidade: ");
                    scanf("%d", &quantidade);
                        
                        
                                        
                    }
                }
                break;
            case 2:
                printf("Exibindo total de vendas:\n");
                for (int i = 0; i < vendas; i++) {
                    printf("Produto:%s\n", nome);
                    printf("Preço:%.2f\n", preco);
                    printf("Quantidade:%d\n", quantidade);
                    
                }
                
               
                printf("Total de vendas: %.2f\n", total);
                break;
            default:
                printf("Opcao invalida.\n");
        }
    }

return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int numeros[5];
    int i;
    int par =0;
    int impar =0;
    int positivo =0;
    int negativos=0;
    int maior =0;
    int menor = 99999;
    int quantidade =0;
    float somaQuantidade =0;
    float somaPar =0;
    float somaImpar =0;
    float mediaPar;
    float mediaGeral;


   for( i = 0; i < 5; i++){
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
 

        if (numeros[i] % 2 == 0){
           par++; 
           somaPar += numeros[i];
        }else{
            impar++;
            somaImpar += numeros[i];
        }
       if (numeros[i] > 0){
        positivo++;
       }else{
       negativos++;
      }
      if (numeros[i] > maior){
        maior = numeros[i];
      }
      if (numeros[i] < menor){
        menor = numeros[i];
      }

      mediaPar = somaPar/par;
      mediaGeral = somaQuantidade/quantidade;
      somaQuantidade += numeros[i];
      quantidade++;

    }
    
     
        printf("Números ímpares: %d\n", impar);
        printf("Números negativos: %d\n", negativos);

        printf("Maior número: %d\n", maior);
        printf("Menor número: %d\n", menor);


         printf("Média par: %.1f \n", mediaPar);

         printf("Média geral: %.1f \n", mediaGeral);

       
    


    return 0;
}
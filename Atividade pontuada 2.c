#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "portuguese");

    char alunos[5][200];
    float notas[5][3];
    float media[3];
    float somaNotas = 0;
    int i;
    
    for(i = 0; i < 5; i++){
        printf("Digite o %d� nome do aluno: ", i+1);
        gets(alunos[i]);
        
        for(j = 0; j < 3 ; j++){
            printf("Digite a %d� nota: ",j+1);
            scanf("%f", &notas[i][j]);
             system("cls|| clear");
             
          somaNotas += notas[i][j];
        }
        
        media[i] = somaNotas / j;
        somaNotas = 0;
       
        
        fflush(stdin); // limpa o cache.
    }
    
    system("cls|| clear");
    
   
    printf("\nExibindo as informa��es do aluno... \n");
    
    for(i = 0; i < 5; i++){
    	 printf("\n\nNome: %s \n", alunos[i]);
    	 
    	for(j = 0; j < 3; j++){    		
          printf("Notas: %.2f \n", notas[i][j]);        
		}
		
        printf("Media: %.2f \n", media[i]);
        
         
        if(media[i] >= 7 ){
        	printf("Aprovado");  
			      	
		}else if( media[i] >= 5 || notas[i] < 7){
			printf("Recupera��o");
			
	}else{
			printf("Reprovado");
		}
    }
   
    return 0;
}

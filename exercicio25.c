/*crie um algoritmo que pega 6 numeros digitados pelo o usuario, no algoritmo e usado uma variavel chamado numeros_sorteio do tipo int e outro chamado de i
que sera o contador dos laco de repeticao di tipo inteiro tambem,
 essa variavel esta sendo usada para armazanar os 6 valores do usuario, atraves de um vetor.
 tambem ultizando dois lacos de repeticao do tipo for, no primeiro laco ele pega os valores do usuario,
 ja no segundo laco ele ja sabendo quais sao os valores do usuario ele ordena os numeros em sequencia.
 e no final apresenta os valores na sequencia correta.*/
 

#include<stdio.h>

int main(){

    int numeros_sorteio[6];
    int i;
    
    printf("Digite 6 numeros para um sorteio.\n");
    for(i = 0; i < 6; i++){
        printf("Digite o %d numero: \n" , i + 1);
        scanf("%d" , &numeros_sorteio[i]);
    }
    printf("\nNumeros escolhidos para o sorteio foram: \n");
    for(i = 0; i < 6; i++){
        printf("%d " , numeros_sorteio[i]);
    }
    printf("\n"); 
    
    return 0; 
    }

/*nesse algoritmo foi utilizado quatro variaveis do tipo char, dois contadores para os lacos for,
  outro que e um vetor chamado letras que armazena 3 posicoes para as letras, e outro que chama valor, que
vai pegar as letras e ordenalas em ordem cresecnte, sendo em ordem alfabetica. primeiro eu peco pro usuario
digitar as letras dentro do primeiro laco, o outro vai realizar o processo de ordena las, nele eu uso tres ifs,
  cada if analisa a posicao onde se encontra casa letra. em resumo ele pega a variavel valor que e temporaria,
  atribui a letra na posicao 0 digitada pelo o usuario, depois a posicao vai pra 1, mudando sua posicao, e assim
a variavel valor pega essa letra ordena conforme a condicao se a posicao 0 for maior que a um realiza esse processo
dito anteriormente*/

#include <stdio.h>

int main(){

  char  i, j, valor, letras[3];

  printf("Digite tres letras e mostrara eles em ordem crescente: "); 

  for(i = 0; i < 3; i++){
    scanf(" %c" , &letras[i]);
  }
  for(j = 0; j < 3; j++){
    if(letras[0] > letras[1]){
      valor = letras[0];
      letras[0] = letras[1];
      letras[1] = valor;    
    }
    if(letras[0] > letras[2]){
      valor = letras[0];
      letras[0] = letras[2];
      letras[2] = valor;
    }
    if(letras[1] > letras[2]){
      valor = letras[1];
      letras[1] = letras[2];
      letras[2] = valor;
    }
  }
  printf("A ordem crescente das letras conforme o alfabeto eh:  %c %c %c\n" , letras[0] , letras[1] , letras [2]);

  return 0;
  } 

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

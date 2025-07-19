/*Nesse algoritmo e usado variaveis do tipo inteiro uma eh chamado inducao recebendo 10, que o 10 representa
ate onde vai a sequencia de fibonacci, ja a segundo chama fibonacci recebendo o valor 0, o terceiro e contador
do laco de repeticao, e mais dois que serao a base do fibonacci, um e base recebe valor 0 e outro recebe valor 1,
e super importante para inicializacao da sequencia, eu uso um printf para o usuario digitar enter
e assim mostrar a sequencia de fibonacci ate o elemento 10, seguindo, eu uso um laco de repeticao
for. onde meu contador inicializa em tres, a condicao dele e que o contador seja menor que a inducao, sendo menor que 10.
com isso eu realizo o processo de fibonacci que os dois primeiros termos somados criam o terceiro
termo e assim por diante, as bases nunca mudam. eu somo o primeiro termo com o segundo, e depois
o primeiro termo da sequencia pega o valor do segundo, e depois o segundo termo pega o valor de
fibonacci que vale 0, para assim ele saber qual sera o ultimo termo da sequencia e parar e 
depois do processo ele mostra a resposta da fibonacci.*/

#include<stdio.h>

int main(){

    int inducao = 10, fibonacci = 0, i;
    int base1 = 0, base2 = 1;
    
        printf("Pressione enter, eh Sera mostrado a sequencia de fibonacci: \n");
        getchar();
        
        if(inducao >= 1){
            printf("%d" , base1);
        }
        if(inducao >= 0){
            printf(" %d" , base2);
        }
        
        for(i = 3; i <= inducao; i++){
          fibonacci = base1 + base2;
          printf(" %d" , fibonacci);
          base1 = base2;
          base2 = fibonacci;
        }
    printf("\n");     
    printf("sequencia de fibonacci realizada com sucesso.\n" , fibonacci);
    return 0;
    }

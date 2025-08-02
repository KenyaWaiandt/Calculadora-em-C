/* Para criar um "if" com duas condções, usamos && ppara "e" e || para "ou"*/
#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    if(x%2==0 && x>0){
        printf("%d eh par e positivo\n", x);
    }
    /* Verifica se um número é par e positivo*/
    if(x%2==0 || x>0){
        printf("%d eh par ou positivo\n", x);
    }
    /*Verificaa se um número é par ou positivo*/
}

/* Precedência: E é executado antes de OU se não houver parênteses*/


// If-else
// Contexto: indicar se um aluno foi aprovado ou reprovado:
int main(){
int x;
scanf("%d", &x);
if( x >= 7 ){ // checa se x eh maior ou igual a 7
    printf("Aprovado!\n");
}

if( x < 7 ){ // checa se x eh menor que 7
    printf("Reprovado!\n");
}

if( x >= 7 ){ // checa se x eh maior ou igual a 7
    printf("Aprovado!\n");
}

if( !( x >= 7 ) ){ // checa se x nao eh maior ou igual a 7
    printf("Reprovado!\n");
}

if( x >= 7 ){ // checa se x eh maior ou igual a 7
    printf("Aprovado!\n");
}

else{ // caso a condicao acima seja falsa
    printf("Reprovado!\n");
}

}



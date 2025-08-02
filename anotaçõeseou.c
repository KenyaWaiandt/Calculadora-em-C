/* Para criar um "if" com duas condções, usamos && ppara "e" e || para "ou"
*/
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
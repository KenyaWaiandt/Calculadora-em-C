#include <stdio.h>
int main(){
    int n;
    //Semelhante ao while, mas testará a condição depois de executar o código.
    do{
        printf("Digite sua senha");
        scanf("%d", &n);
    } while (n!=2018);
    printf("Senha aceita");
}
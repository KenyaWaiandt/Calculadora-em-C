#include<stdio.h>
 /*Codificação de funções:
    retorno nome(parâmetros){
        código
    }
    */
int imprime(){
    printf("xyz\n");
}
float soma(float a, float b){
    return((a+b)/2.0);
}
int main(){
    imprime();

    float x, y;
    scanf("%f%f", &x, &y);
    printf("%.3f\n", soma(x, y));
}
#include <stdio.h>
int main(){
    printf("%d\n", 2+2/2);
    printf("\n");
    printf("Media das notas de um aluno\n");
    float nota1, nota2;
    printf("Digite a primeira nota:");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:");
    scanf("%f", &nota2);
    printf("Media = %f\n", (nota1+nota2)/2);
}
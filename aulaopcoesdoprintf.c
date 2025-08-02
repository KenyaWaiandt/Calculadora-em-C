#include <stdio.h> 
int main(){
    /*
    Como escrever alguns caracteres especiais:
    \n - Nova linha;
    \t - Tabulação (tab);
    \\ - \
    %% - %
    */
   printf("%d\n%d\n", 1, 2);
   printf("%d\t%d\n", 1, 2);
   /*
   Alinhamento: %nd (n = número de espaços).
   n positivo para alinhamento à direita;
   n negativo para alinhamento à esquerda;
   %0nd - completar o alinhamento com zero's.
   */
  int a=1, b=11, c=111;
  printf("%3d%3d%3d", a, b, c);
  /*
  Definir precisão:
  Basta escrever %.nf, onde n é o número de casas decimais que queremos considerar.
  */
  float real = 123.58974;
printf("%f\n", real);
printf("%.2f\n", real);
printf("%.3f\n", real);
/*
Imprimir valores em:
%o = octal;
%X = hexadecimal maiúsculo;
%x = hexadecimal minúsculo.
*/
}
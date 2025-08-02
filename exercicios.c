// Positivo, negativo ou nulo
#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(a>0){
        printf("positivo");
    }
    if(a<0){
        printf("negativo");
    }
    if(a==0){
        printf("nulo");
    }
// Aprovado, reprovado ou final
    int x, y;
    scanf("%d%d", &x, &y);
    if((2*x+3*y)/5>=7){
        printf("Aprovado");
    }
    if((2*x+3*y)/5<7 && (2*x+3*y)/5>=3){
        printf("Final");
    }
    if((2*x+3*y)/5<3){
        printf("Reprovado");
    }

// Quadrante
  int m, n;
  scanf("%d%d", &m, &n);
  if (m>0 && n>0){
    printf("Q1");
  }
  if (m<0 && n>0){
    printf("Q2");
  }
  if (m<0 && n<0){
    printf("Q3");
  }
  if (m>0 && n<0){
    printf("Q4");
  }
  if (m==0){
    printf("eixos");
  }
  if (n==0){
    printf("eixos");
  }
}
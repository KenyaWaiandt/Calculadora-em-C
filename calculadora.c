#include <stdio.h>
#include <locale.h>

int telainicial(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    printf("===============================\n   Calculadora Simples\n===============================\nSelecione uma operação:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção: ");
}

int soma(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    float a;
    float b;

   printf("Digite o primeiro número: ");
   scanf("%f", &a);

   printf("Digite o segundo número: ");
   scanf("%f", &b);

   printf("Resultado: %f + %f = %f\n", a, b, a+b);
}

int subtração(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    float a;
    float b;

   printf("Digite o primeiro número: ");
   scanf("%f", &a);

   printf("Digite o segundo número: ");
   scanf("%f", &b);

   printf("Resultado: %f - %f = %f\n", a, b, a-b);
}

int multiplicação(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    float a;
    float b;

   printf("Digite o primeiro número: ");
   scanf("%f", &a);

   printf("Digite o segundo número: ");
   scanf("%f", &b);

   printf("Resultado: %f * %f = %f\n", a, b, a*b);
}

int divisão(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    float a;
    float b;

   printf("Digite o primeiro número: ");
   scanf("%f", &a);

   printf("Digite o segundo número: ");
   scanf("%f", &b);

   if(b != 0){
   printf("Resultado: %f / %f = %f\n", a, b, a/b);
   }

   else{
    printf("Não é possível dividir por 0\n");
   }
}

int escolhas(int a){
setlocale(LC_ALL, "pt_BR.UTF-8");

    if(a==1){
       soma();
    }
    if(a==2){
       subtração();
    }
    if(a==3){
       multiplicação();
    }
    if(a==4){
       divisão();
    }
     if(a==5){
       printf("Obrigada por usar a calculadora! Até a próxima.\n");

    }
}

int invalido(){
   int n; 
   
   int s; 
   
   if (scanf("%d", &n) != 1){
    s = 0;
    while (getchar() != '\n');
   }
   else {
    s = 1;
   }
   if(s==0){
    invalido();
   }
   if(s==1){
   if(n<1 || n>5){
 invalido();
   }
   else{
     escolhas(n);
   }
}
}

int sn(){
   char n;
    int s; 
   
   if (scanf("%c", &n) != 1){
    s = 0;
    while (getchar() != '\n');
   }
   else {
    s = 1;
   }

   if(s==0){
       printf("Opção inválida. Para escolher uma opção utilize apenas s para sim ou n para não. Selecione uma nova opção:\n");
    invalido();
   }
   if(s==1){
      if(n == 115){
          telainicial();
    int n; 
    int a; 
   
   if (scanf("%d", &n) != 1){
    a = 0;
    while (getchar() != '\n');
   }
   else {
    a = 1;
   }

   if(a==0){
       printf("Opção inválida. Para escolher uma opção utilize apenas números de 1 a 5. Selecione uma nova opção:\n");
    invalido();
   }
   if(a==1){
      if(n>=1 && n<=5){
    escolhas(n);
      }
      else{
          printf("Opção inválida. Para escolher uma opção utilize apenas números de 1 a 5. Selecione uma nova opção:\n");
         invalido();
      }
   }

int sn();

      }
       if(n == 110){
  printf("Muito obrigada por utilizar a calculadora! Até a próxima!");
      }
      else{
         printf("Opção inválida. Para escolher uma opção utilize apenas s para sim ou n para não. Selecione uma nova opção:\n");
         invalido();
      }
   }
}
int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    telainicial();
    int n; 
    int s; 
   
   if (scanf("%d", &n) != 1){
    s = 0;
    while (getchar() != '\n');
   }
   else {
    s = 1;
   }

   if(s==0){
       printf("Opção inválida. Para escolher uma opção utilize apenas números de 1 a 5. Selecione uma nova opção:\n");
    invalido();
   }
   if(s==1){
      if(n>=1 && n<=5){
    escolhas(n);
      }
      else{
          printf("Opção inválida. Para escolher uma opção utilize apenas números de 1 a 5. Selecione uma nova opção:\n");
         invalido();
      }
   }

int sn();

    return 0;
}

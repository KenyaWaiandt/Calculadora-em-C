#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int telainicial(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    printf("===============================\n   Calculadora Simples\n===============================\nSelecione uma operação:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção: ");
return 0;
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
return 0;
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
return 0; 
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
return 0;
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
return 0;
}

int escolhas(int a){

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
    return 0;
}

int n;

int inicial(){

int s;

if (scanf(" %d", &n) != 1) {
    s = 0;
     while (getchar() != '\n');
}
else {
    s = 1;
}

if (s==0){
    printf("Opção inválida. Utilize apenas números de 1 a 5.\n");
    inicial();
}

if(s==1){
    
    if(n>=1 && n<=4){
       escolhas (n);
       return 0;
    }

    if(n==5){
        printf("Muito obrigada por utilizar a calculadora!\n");
        exit(0);
       return 0;
    }

    else{
        printf("Opção inválida. Utilize apenas números de 1 a 5.\n");
        inicial();
    }

}
return 0;
}

int naim(){
setlocale(LC_ALL, "pt_BR.UTF-8");

inicial();

}

int sn(){
printf("Deseja realizar uma nova operação? (s/n)\n");

char c;
int s;

if (scanf(" %c", &c) != 1) {
  s = 0;
 while (getchar() != '\n');
}
else {
s = 1;
}

if(s==0){
    printf("Opção inválida. Utilize s para sim e n para não.\n");
    return sn();
}

if(s==1){
    
    if(c == 's' || c == 'S'){
        return 1;
    }

    if(c == 'n' || c == 'N'){
        return 2;
    }

    else{
    printf("Opção inválida. Digite s para sim e n para não.");
    return sn();
    }
}  
    return 0;
}

int i;

int teste(){
   naim();

i = sn();
 
}

int main(){

telainicial();

teste();

while(i==1){
    telainicial();
    teste();
}
if(i==2){
    printf("Muito obrigada por utilizar a calculadora!");
}

}


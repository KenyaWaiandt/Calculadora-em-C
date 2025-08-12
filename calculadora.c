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
       return 0;
    }

}

int invalido(){
     printf("Opção inválida. Para escolher uma opção utilize apenas números de 1 a 5.\n");
        int n;
        printf("Digite uma opção: ");
        scanf("%d", &n);
        if(1<=n && n<=5){
            escolhas(n);
        }
        else{
            invalido();
        }
}

int sn(){
     printf("Deseja realizar uma nova operação? (s/n)\n");
        char c;
        scanf(" %c", &c);
        if(c == 115 || c == 110){
        if (c == 115){
    telainicial();
    int n;  
     scanf("%d", &n);

    if(n>0 && n<6){
    escolhas(n);
    }
    else{
        invalido();
    }

    sn();
    }
    if( c == 110){
                printf("Obrigada por utilizar a calculadora. Até a próxima!");
        }
    }
        else{
            printf("Opção inválida.\n");
            sn();
        }
}

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    telainicial();
    int n;  
     scanf("%d", &n);

    if(n>0 && n<6){
    escolhas(n);
    }
    else{
        invalido();
    }

    if(n>= 1 && n<5){
    sn();
    }

    return 0;
}

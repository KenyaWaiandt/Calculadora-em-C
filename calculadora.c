#include <stdio.h>
#include <locale.h>

int telainicial(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    printf("===============================\n   Calculadora Simples\n===============================\nSelecione uma operação:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção: ");
}

int soma(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int a;
    int b;

   printf("Digite o primeiro número: ");
   scanf("%d", &a);

   printf("Digite o segundo número: ");
   scanf("%d", &b);

   printf("Resultado: %d + %d = %d", a, b, a+b);
}

int subtração(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int a;
    int b;

   printf("Digite o primeiro número: ");
   scanf("%d", &a);

   printf("Digite o segundo número: ");
   scanf("%d", &b);

   printf("Resultado: %d - %d = %d", a, b, a-b);
}

int multiplicação(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int a;
    int b;

   printf("Digite o primeiro número: ");
   scanf("%d", &a);

   printf("Digite o segundo número: ");
   scanf("%d", &b);

   printf("Resultado: %d * %d = %d", a, b, a*b);
}

int divisão(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int a;
    int b;

   printf("Digite o primeiro número: ");
   scanf("%d", &a);

   printf("Digite o segundo número: ");
   scanf("%d", &b);

   printf("Resultado: %d / %d = %d", a, b, a/b);
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
       printf("Obrigado por usar a calculadora! Até a próxima.\n");
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
        printf("Opção inválida. Para escolher uma opção utilize apenas números de 1 a 5.\n");
        
        scanf("%d", &n);

        escolhas(n);
    }

    if(n>0 && n<5){
        printf("Deseja realizar outra operação? (s/n)\n");
        char c;
        scanf("%c", &c);
        if(c == 115){
            main();
        }
        else{
            printf("Obrigado por usar a calculadora! Até a próxima.");
        }
    }

    return 0;
    
}
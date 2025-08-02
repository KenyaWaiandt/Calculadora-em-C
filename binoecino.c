#include<stdio.h>

int soma(int a, int b){
    int s = a+b;
    return s;
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int m = soma (a, b);
    if(m % 2 == 0){
        printf("Bino\n");
    }
     if(m % 2 == 1){
        printf("Cino\n");
    }
}
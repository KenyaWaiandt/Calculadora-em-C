
#include <stdio.h>
#include <string.h>

int main(){
    char lalala[1000];
    scanf(" %s", lalala );

    char lala[2];
    scanf(" %s",lala);

    int contador;
    contador = 0;
    int i;

    for (i = 0; lalala[i] != 0; i++){
        if(lalala[i] == lala[0]){
            contador++;
        } 
    }
    printf("%d", contador);
}
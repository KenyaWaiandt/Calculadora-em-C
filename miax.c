#include <stdio.h>
int main(){
    int v[10];  
    
    scanf ("%d %d %d %d %d %d %d %d %d %d", &v[0],&v[1],&v[2],&v[3],&v[4],&v[5],&v[6],&v[7],&v[8],&v[9]);

    int n;
    scanf("%d", &n);

    int i;

    int a;
    a = 0;

    for(i = 0; i<10; i++){
        if(n == v[i]){
            a = 1;
            break;
        }
    }
    
    int contagem;
    contagem = 0;

    if (a == 1){
    
    for (i = 0; i<10; i++){
        if(v[i]==n){
            contagem = contagem+1;
        }
    }
    printf("%d\n", contagem);
    

    for (i = 0; i<10; i++){
        if(n==v[i]){
            printf("%d ", i);
        }
     }
    }

    if (a == 0){
        printf("Mia x");
    }

}
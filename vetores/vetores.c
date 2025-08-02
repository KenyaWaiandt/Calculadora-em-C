#include <stdio.h>
int main(){
    int v[10];
    scanf ("%d %d %d %d %d %d %d %d %d %d", &v[0],&v[1],&v[2],&v[3],&v[4],&v[5],&v[6],&v[7],&v[8],&v[9]);

    int n;
    scanf("%d", &n);

    int i;

    int a;

    for(i = 0; i<10; i++){
        if(n==v[i]){
            a = 1;
            break;
        }
        else{
            a = 0;
        }
    }

    if (a == 1){
        printf("SIM");
    }

    if (a == 0){
        printf("NAO");
    }
}
#include <stdio.h>
int fatorial(int n){
    if(n==0){
        return 1;
    }
    if(n>0){
        return n*fatorial(n-1);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    fatorial(n);
    printf("%d\n", fatorial(n));
}
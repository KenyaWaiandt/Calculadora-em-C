#include <stdio.h> 
int main(){
    int x;
    scanf("%d", &x);
    if(x % 2==0){
    printf("%d eh par!\n", x);
    }
    if(x % 2==1){
    printf("%d eh impar!\n", x);
    }
}
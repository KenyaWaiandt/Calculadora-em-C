#include<stdio.h>
int main(){
    int i;
    scanf("%d", &i);
    int a;
    a=1;
    do{
        printf("%d * %d = %d\n", i, a, i*a);
        a = a+1;
    }while(a<=10);
}
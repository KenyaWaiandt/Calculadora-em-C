#include<stdio.h>
int main(){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a<b){
    do{
        printf("%d ", a);
        a=a+1;
    }while(a<b);
    printf("%d ", b);
}
 if(a>b){
    do{
        printf("%d ", b);
        b=b+1;
    }while(b<a);
    printf("%d ", a);
}




}
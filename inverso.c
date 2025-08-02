#include <stdio.h>
int main(){
    int v[10], i;
    
    for(i=0; i<10; i++){
        scanf("%d", &v[i]);
    }
i = 9;
    do{
        printf("%d\n", v[i]);
        i = i - 1;
    }while (i>=0);
}

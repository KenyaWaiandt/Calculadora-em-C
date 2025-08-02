#include <stdio.h>
#include <string.h>

int main(){
    char s[1000];
    scanf(" %s", s);

    char vogais[6] = {'a', 'e', 'i', 'o', 'u'};
    char consoantes[20] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};

    int i; 
    int k;

    printf("Vogais: ");

    for(k=0;vogais[k]!=0;k++){
        for (i=0; s[i]!=0; i++){
        if(s[i]==vogais[k]){  
           printf("%c", s[i]);
        }
    }
    }

    printf("\n");

    printf("Consoantes: ");

   for(k=0;consoantes[k]!=0;k++){
        for (i=0; s[i]!=0; i++){
        if(s[i]==consoantes[k]){  
           printf("%c", s[i]);
        }
    }
    }

}
    
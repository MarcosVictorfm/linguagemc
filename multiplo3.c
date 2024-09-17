#include <stdio.h>

int main(){

// declaração de variavel de Zero(0) até cem(100)
int contar = 0;

// dclaração da variável de conta a quantidade de números multiplos de 3
int qtd = 0;

while(contar <=100){
    if (contar % 3 == 0){
        printf("%d\n",contar);
        qtd++;
    }
    contar++;
}
    printf("quantidade de multiplos de 3: %d\n",qtd);
return 0;
}
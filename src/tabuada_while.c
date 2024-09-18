#include <stdio.h>

int main(){

    // número que o usuário irá digitar para faxer a tabuada 
    int num;
    // Variável que inicia a tabuada em 0 e vai até 10
    int contar=0;
    // guardao resultado da mukltiplicação das variavel num com a contar
    int rs;

    printf("Digite o número para fazer a tabuada:\n");
    scanf ("%d",&num);

    while (contar <= 10){
        rs =  num * contar;
        printf("%d x %d = %d\n",num,contar,rs);
        contar++;
    }
    return 0;
}
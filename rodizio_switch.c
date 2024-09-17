#include <stdio.h>

int main(){

    int fim_p;
    printf("Digite o ultimo número da placa do seu veículo:\n");
    scanf("%d",&fim_p);

    switch(fim_p){
        case 1:
            printf("rodizio na segunda-feira\n");
            break;
        case 2:
            printf("rodizio na segunda-feira\n");
            break;
        case 3:
            printf("rodizio na terça-feira\n");
            break;
        case 4:
            printf("rodizio na terça-feira\n");
            break;
        case 5:
            printf("rodizio na quarta-feira\n");
            break;
        case 6:
            printf("rodizio na quarta-feira\n");
            break;
        case 7:
            printf("rodizio na quinta-feira\n");
            break;
        case 8:
            printf("rodizio na quinta-feira\n");
            break;
        case 9:
            printf("rodizio na sexta-feira\n");
            break;
        case 0:
            printf("rodizio na sexta-feira\n");
            break;
         default :
            printf("final da placa inexistente\n");
            break;
        
    }
    
    return 0;
}
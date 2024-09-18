#include <stdio.h>

int main(){
    int fim_p;

    printf("Digite o final da placa di seu veículo:\n");
    scanf ("%d",&fim_p);

    if(fim_p == 1){
        printf("Vocé não pode sair com o veículo na segunda-feira\n");
    }
       else if(fim_p == 2){
        printf("Vocé não pode sair com o veículo na segunda-feira\n");
    }
       else if(fim_p == 3){
        printf("Vocé não pode sair com o veículo na terça-feira\n");
    }
      else if(fim_p == 4){
        printf("Vocé não pode sair com o veículo na terça-feira\n");
    }
      else if(fim_p == 5){
        printf("Vocé não pode sair com o veículo na quarta-feira\n");
    }
     else if(fim_p == 6){
        printf("Vocé não pode sair com o veículo na quarta-feira\n");
    }
     else if(fim_p == 7){
        printf("Vocé não pode sair com o veículo na quinta-feira\n");
    }
     else if(fim_p == 8){
        printf("Vocé não pode sair com o veículo na quinta-feira\n");
    }
     else if(fim_p == 9){
        printf("Vocé não pode sair com o veículo na sexta-feira\n");
    }
     else if(fim_p == 0){
        printf("Vocé não pode sair com o veículo na sexta-feira\n");
    }
    else{
        printf("Final de placa inexistente\n ");
    }

    return 0;
    
}
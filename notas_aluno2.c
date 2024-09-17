#include <stdio.h>
int main()
{
    float num1,num2,num3,num4,soma;
    printf("Digite a primeira nota: \n");
    scanf ("%f", &num1);
     printf("Digite a segunda nota: \n");
     scanf ("%f", &num2);
      printf("Digite a terceira nota: \n");
      scanf ("%f", &num3);
      printf("Digite a quarta nota: \n");
     scanf ("%f", &num4);
     soma = (num1+num2+num3+num4)/4;
     printf("A nota final do aluno é %.2f ",soma );
     
    /*Para alunos  com a media maior ou igual a 6, aprovado
      Para alunos com a média menor ou igual a 4 ,reprovado
      Para os demais com nota maior que 4 e menor que 6,recuperação
      */


     if(soma >=6)
     {
        printf(" aprovado\n");
     }

     else if(soma<= 4){
        printf("reprovado\n");
      }
      else{
        printf("recuperação\n");
      }


 return 0;

}
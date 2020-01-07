#include <stdio.h>

int main(void){
    int salario;
    int alimentacao;
    int descontos;
    printf("introduza seu salario\n");
    scanf(" %d", &salario);
    printf("introduza subsidio de alimentação\n");
    scanf(" %d",&alimentacao);
    printf("introduza o desconto \n");
    scanf(" %d", &descontos);

    int liquido=0;
liquido= alimentacao + descontos; // soma das variavais alimentacao e descontos
printf("salario liquido a receber %d\n",liquido); // outpout a mostrar a variavel liquido

return 0;

}
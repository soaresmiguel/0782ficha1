#include <stdio.h>

int main(void){
    // progama que receba o total de receitas e o total de despesas de um mês, e devolva ao utilizador o saldo
    int A;
    int b;
    printf("introduza o valor das receitas\n"); // valores recebidos
    scanf(" %d",  &A ); // commando input 
    printf("introduza o valor para as despesas\n"); //valores pagos
    scanf(" %d", &b); // comando input

    int saldo=0;
    saldo= A - b;
    printf("saldo a receber %d\n", saldo);

    return 0;
    }
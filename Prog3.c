#include <stdio.h>
int main (void) {
float consumo;
float Potencia=5.42;
float Preco=0.16;

printf("introduza o consumo \n" );
scanf(" %f", &consumo);

int semiva=0;
semiva=Potencia + (consumo * Preco);
printf(" valor a pagar sem iva %d\n", semiva);
int comiva;
comiva=semiva * 0.18;
printf("valor a pagar com iva %d\n",comiva);
int final;
final=comiva + semiva;
printf("preco final e de %d\n",final);
return 0;




}
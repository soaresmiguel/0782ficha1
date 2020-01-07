#include <stdio.h>
int main (void) {
    char nome [200];
    float primeiroteste;
    float segundoteste;
    float terceiroteste;
    float mediadoprimeiro;
    float mediadosegundo;
    float mediadoterceiro;
    float mediaponderada;
    
    printf("introduza seu nome \n");
    scanf(" %s",nome);

    printf("diga a nota do seu primeiro teste\n");
    scanf(" %f",&primeiroteste);

    printf("introduza a nota do segundo teste\n");
    scanf(" %f",&segundoteste);

    printf("introduza a nota do terceiroteste\n");
    scanf(" %f",&terceiroteste);

    mediadoprimeiro= primeiroteste *0.25;
    mediadosegundo= segundoteste *0.35;
    mediadoterceiro= terceiroteste *0.40;

    mediaponderada=mediadoprimeiro +mediadosegundo +mediadoterceiro;

    printf("sua media ponderada é de %f\n",mediaponderada);

    return 0;
}
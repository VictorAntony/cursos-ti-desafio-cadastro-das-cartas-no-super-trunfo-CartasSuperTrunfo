#include <stdio.h>

int main(){
    /*Carta 1*/
    int populacao1, turismo1;
    float area1, pib1;
    char estado1, codigo1[5], cidade1[20];

    /*Carta 2*/
    int populacao2, turismo2;
    float area2, pib2;
    char estado2, codigo2[5], cidade2[20];

    printf("Bem vindo!\nEsse é o Super Trunfo, jogo de cartas feito por %s.\n\n"
        "Vamos escolher os dados da sua primeira carta.\n\n", "Victor Antony");

    printf("Escolha uma letra entre 'A' à 'H' que irá representar seus estado:");
    scanf("%c", &estado1);
    printf("Escolha o codigo da sua carta, ele deve ser a letra que escolheu para o estado mais um valor de 01 à 04:");
    scanf("%s", codigo1);
    printf("Escolha o nome da cidade:");
    scanf("%s", cidade1);
    printf("Insira o numero da população dessa cidade:");
    scanf("%d", &populacao1);
    printf("Insira a Área dessa cidade:");
    scanf("%f", &area1);
    printf("Insira o PIB dessa cidade:");
    scanf("%f", &pib1);
    printf("Insira a quantidade de pontos turísticos dessa cidade:");
    scanf("%d", &turismo1);

    printf("\nVamos escolher os dados da sua segunda carta agora.\n\n");

    printf("Escolha uma letra entre 'A' à 'H' que irá representar seus estado:");
    scanf(" %c", &estado2);
    printf("Escolha o codigo da sua carta, ele deve ser a letra que escolheu para o estado mais um valor de 01 à 04:");
    scanf("%s", codigo2);
    printf("Escolha o nome da cidade:");
    scanf("%s", cidade2);
    printf("Insira o numero da população dessa cidade:");
    scanf("%d", &populacao2);
    printf("Insira a Área dessa cidade:");
    scanf("%f", &area2);
    printf("Insira o PIB dessa cidade:");
    scanf("%f", &pib2);
    printf("Insira a quantidade de pontos turísticos dessa cidade:");
    scanf("%d", &turismo2);

    printf("\nCarta1:\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da cidade: %s\n"
        "População: %d\n"
        "Área: %.2f Km²\n"
        "PIB: %f bilhôes de reais\n"
        "Número de pontos turísticos: %d\n\n", estado1,codigo1,cidade1,populacao1,area1,pib1,turismo1);

    printf("Carta2:\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da cidade: %s\n"
        "População: %d\n"
        "Área: %.2f Km²\n"
        "PIB: %f bilhôes de reais\n"
        "Número de pontos turísticos: %d\n", estado2,codigo2,cidade2,populacao2,area2,pib2,turismo2);
    
    return  0;
}

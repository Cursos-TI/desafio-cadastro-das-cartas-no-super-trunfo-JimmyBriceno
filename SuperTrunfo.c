#include <stdio.h>

int main() {

    // Lendo a primeira carta do usuário

    
    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;

    printf("Digite um estado: \n ");
    scanf("%s", estado);

    printf("Digite o código da carta: \n ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n ");
    scanf("%s", cidade);

    printf("Digite a população: \n ");
    scanf("%d", &populacao);

    printf("Digite a Área (em km²): \n ");
    scanf("%f", &area);

    printf("Digite o PIB: \n ");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n ");
    scanf("%d", &pontos_turisticos);

    // Lendo a segunda carta do usuário
    
    
    char estado2[50];
    char codigo2[50];
    char cidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;

   
   
    printf("Digite o segundo estado: \n ");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n ");
    scanf("%s", cidade2);

    printf("Digite a população: \n ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): \n ");
    scanf("%f", &area2);

    printf("Digite o PIB: \n ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n ");
    scanf("%d", &pontos_turisticos2);

    return 0;
}

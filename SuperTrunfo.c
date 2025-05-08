#include <stdio.h>

int main() {

    // Lendo a primeira carta do usuário

    
    char Estado[50];
    char Codigo[50];
    char Cidade[50];
    int Populacao;
    float Area;
    float PIB;
    int Pontos_turisticos;

    printf("Digite um estado: \n ");
    scanf("%c", &Estado);

    printf("Digite o código da carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n ");
    scanf("%s", &Codigo);

    printf("Digite o nome da cidade: \n ");
    scanf("%s", &Cidade);

    printf("Digite a população: \n ");
    scanf("%d", &Populacao);

    printf("Digite a Área (em km²): \n ");
    scanf("%f", &Area);

    printf("Digite o PIB: \n ");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n ");
    scanf("%d", &Pontos_turisticos);

    // Lendo a segunda carta do usuário
    
    
    char Estado2[50];
    char Codigo2[50];
    char Cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int Pontos_turisticos2;

   
   
    printf("Digite o segundo estado: \n ");
    scanf("%c", &Estado2);

    printf("Digite o código da carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n ");
    scanf("%s", &Codigo2);

    printf("Digite o nome da cidade: \n ");
    scanf("%s", &Cidade2);

    printf("Digite a população: \n ");
    scanf("%d", &Populacao2);

    printf("Digite a Área (em km²): \n ");
    scanf("%f", &Area2);

    printf("Digite o PIB: \n ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n ");
    scanf("%d", &Pontos_turisticos2);

    
    // Exibindo as informações das cartas do usuário

    printf("Carta 1 \n");

    printf("Estado: %c\n", &Estado);
    printf("Código da carta: %s\n", &Codigo);
    printf("Cidade: %s\n", &Cidade);
    printf("População: %d\n", &Populacao);
    printf("Área: %f\n", &Area);
    printf("PIB: %f\n", &PIB);
    printf("Pontos Turísticos: %d\n", &Pontos_turisticos);


    printf("Carta 2 \n");

    printf("Estado: %c\n", &Estado2);
    printf("Código da carta: %s\n", &Codigo2);
    printf("Cidade: %s\n", &Cidade2);
    printf("População: %d\n", &Populacao2);
    printf("Área: %f\n", &Area2);
    printf("PIB: %f\n", &PIB2);
    printf("Pontos Turísticos: %d\n", &Pontos_turisticos2);



    return 0;
}

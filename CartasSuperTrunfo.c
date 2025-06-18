#include <stdio.h>

int main(){
    // Carta 1 - Espanha
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomePais1[] = "Espanha";
    int populacao1 = 47000000; // 47 milhões
    float area1 = 505.99; // em mil km²
    float pib1 = 1.9; // em trilhões de reais
    int pontosTuristicos1 = 45;

    // Carta 2 - Portugal
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomePais2[] = "Portugal";
    int populacao2 = 10300000; // 10,3 milhões
    float area2 = 92.2;
    float pib2 = 0.6;
    int pontosTuristicos2 = 25;

    // Carta 3 - Brasil
    char estado3 = 'C';
    char codigo3[] = "C03";
    char nomePais3[] = "Brasil";
    int populacao3 = 203000000; // 203 milhões
    float area3 = 8515.77;
    float pib3 = 10.1;
    int pontosTuristicos3 = 100;

    // Carta 4 - Itália
    char estado4 = 'D';
    char codigo4[] = "D04";
    char nomePais4[] = "Itália";
    int populacao4 = 59000000; // 59 milhões
    float area4 = 301.34;
    float pib4 = 2.1;
    int pontosTuristicos4 = 60;

    // ==== Exibição das Cartas ====
    printf("\n===== Cartas do Super Trunfo - Países =====\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome do País: %s\n", nomePais1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f mil km²\n", area1);
    printf("PIB: %.2f trilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome do País: %s\n", nomePais2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f mil km²\n", area2);
    printf("PIB: %.2f trilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    printf("\nCarta 3:\n");
    printf("Estado: %c\n", estado3);
    printf("Código: %s\n", codigo3);
    printf("Nome do País: %s\n", nomePais3);
    printf("População: %d habitantes\n", populacao3);
    printf("Área: %.2f mil km²\n", area3);
    printf("PIB: %.2f trilhões de reais\n", pib3);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos3);

    printf("\nCarta 4:\n");
    printf("Estado: %c\n", estado4);
    printf("Código: %s\n", codigo4);
    printf("Nome do País: %s\n", nomePais4);
    printf("População: %d habitantes\n", populacao4);
    printf("Área: %.2f mil km²\n", area4);
    printf("PIB: %.2f trilhões de reais\n", pib4);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos4);

    return 0;
}

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

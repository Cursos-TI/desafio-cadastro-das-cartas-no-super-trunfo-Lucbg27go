#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Variáveis para a Carta 1
    char estado1;
    int cidade1, populacao1, pontos_turisticos1;
    float area1, pib1;
    
    // Variáveis para a Carta 2
    char estado2;
    int cidade2, populacao2, pontos_turisticos2;
    float area2, pib2;

    // Cabeçalho do programa
    printf("=== SUPER TRUNFO PAÍSES - CADASTRO DE CARTAS ===\n");
    printf("=== NÍVEL NOVATO ===\n\n");
    
    // Cadastro da Carta 1
    printf("CADASTRO CARTA 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Cidade (1-4): ");
    scanf("%d", &cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em milhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cadastro da Carta 2
    printf("\nCADASTRO CARTA 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Cidade (1-4): ");
    scanf("%d", &cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em milhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Exibição dos dados cadastrados
    printf("\n=== DADOS DAS CARTAS CADASTRADAS ===\n");
    
    // Carta 1
    printf("\nCARTA %c%02d:\n", estado1, cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    
    // Carta 2
    printf("\nCARTA %c%02d:\n", estado2, cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}

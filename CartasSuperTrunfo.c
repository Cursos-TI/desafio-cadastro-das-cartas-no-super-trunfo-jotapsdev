#include <stdio.h>

int main() {
    char estado[] = "Minas Gerais";  
    char codigo_carta[3] = "BH";     
    char nome_cidade[15] = "Belo Horizonte"; 

    int populacao = 2316000;  
    float area_km2 = 331354;   
    double PIB = 105829675053;
    int numero_pontos_turisticos = 22;

    
    printf("Estado: %s\n", estado);
    printf("Código Carta: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d mil\n", populacao);
    printf("Área (km²): %.3f\n", area_km2);
    printf("PIB: %.2f mil\n", PIB);
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos);


    char Estado [] = "Sao Paulo";
    char codigo_da_carta[3]= "SP";
    char nome_da_cidade[20] = "Sao Paulo";

    int Populacao = 11451245;
    int numero_de_pontos_turisticos = 32;
    float area_em_km2 = 1.52120;
    double pib = 8289806077.31;

    printf("estado: %s\n", Estado);
    printf("Código da carta: %s\n", codigo_da_carta);
    printf("nome de da cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf(" Area (km2): %3f\n", area_km2);
    printf("PIB: %2f mil\n", PIB);
    printf(" Numero de pontos turisticos: %d\n", numero_de_pontos_turisticos);




   return 0;
}
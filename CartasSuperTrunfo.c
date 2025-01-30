#include <stdio.h>
float calculatePopulationDensity(long int population, long int area) {
    return population / area;
}

float calculatePIBPerCapita(long int PIB, long int population) {
    return PIB / population;
}

float calculateSuperPower(long int PIB, long int population, long int area, long int numberOfTouristSpots, long int populationDensity, long int PIBPerCapita) {
    return PIB + population + area + numberOfTouristSpots + populationDensity + PIBPerCapita;
}

int main() {
    struct Card {
        char code[5];
        char state[30];
        char cityName[30];
        long int population;
        float area;
        float PIB;
        long int numberOfTouristSpots;
        float populationDensity;
        float PIBPerCapita;
        float superPower;
    };

    struct Card card1;

    struct Card card2;

    printf("\nBem-vindo ao Super Trunfo!\n");

    printf("Vamos começar cadastrando sua primeira carta, insira o código da carta, formado pela letra do estado (A a H) e o número da cidade (01 a 04):  \n");
    scanf("%4s", card1.code);

    printf("Digite o nome da cidade: \n");
    scanf("%29s", card1.cityName);

    printf("Agora, digite o estado da cidade: \n");
    scanf("%29s", card1.state);

    printf("Agora, digite a população da cidade: \n");
    scanf("%ld", &card1.population);

    printf("Por favor, informe o área da cidade em km²: \n");
    scanf("%f", &card1.area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &card1.PIB);

    printf("Por último, digite o número de pontos turísticos na cidade: \n");
    scanf("%ld", &card1.numberOfTouristSpots);

    printf("Agora vamos cadastrar sua segunda carta, insira o código da carta, formado pela letra do estado (A a H) e o número da cidade (01 a 04): \n");
    scanf("%4s[^\n]", card2.code);

    printf("Digite o nome da cidade: \n");
    scanf("%29s", card2.cityName);

    printf("Agora, digite o estado da cidade: \n");
    scanf("%29s", card2.state);

    printf("Agora, digite a população da cidade: \n");
    scanf("%ld", &card2.population);

    printf("Por favor, informe o área da cidade em km²: \n");
    scanf("%f", &card2.area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &card2.PIB);

    printf("Por último, digite o número de pontos turísticos na cidade: \n");
    scanf("%ld", &card2.numberOfTouristSpots);

    card1.populationDensity = calculatePopulationDensity(card1.population, card1.area);

    card1.PIBPerCapita = calculatePIBPerCapita(card1.PIB, card1.population);

    card2.populationDensity = calculatePopulationDensity(card2.population, card2.area);

    card2.PIBPerCapita = calculatePIBPerCapita(card2.PIB, card2.population);

    card1.superPower = calculateSuperPower(card1.PIB, card1.population, card1.area, card1.numberOfTouristSpots, card1.populationDensity, card1.PIBPerCapita);

    card2.superPower = calculateSuperPower(card2.PIB, card2.population, card2.area, card2.numberOfTouristSpots, card2.populationDensity, card2.PIBPerCapita);

    printf("\nCartas cadastradas com sucesso!\n");

    if(card1.populationDensity > card2.populationDensity) {
        printf("\nCarta %s é a vencedora na propriedade densidade populacional!", card1.code);
    } else {
        printf("\nCarta %s é a vencedora na propriedade densidade populacional!", card2.code);
    }

    if(card1.superPower > card2.superPower) {
        printf("\nCarta %s é a vencedora na propriedade super poder!", card1.code);
    } else {
        printf("\nCarta %s é a vencedora na propriedade super poder!", card2.code);
    }

    return 0;
}

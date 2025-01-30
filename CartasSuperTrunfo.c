#include <stdio.h>
long int calculatePopulationDensity(long int population, long int area) {
    return population / area;
}

long int calculatePIBPerCapita(long int PIB, long int population) {
    return PIB / population;
}

long int calculateSuperPower(long int PIB, long int population, long int area, long int numberOfTouristSpots, long int populationDensity, long int PIBPerCapita) {
    return PIB + population + area + numberOfTouristSpots + populationDensity + PIBPerCapita;
}

int main() {
    struct Card {
        char code[3];
        long int population;
        long int area;
        long int PIB;
        long int numberOfTouristSpots;
        long int populationDensity;
        long int PIBPerCapita;
        long int superPower;
    };

    typedef struct card Card;

    struct Card card1;

    struct Card card2;

    printf("\nBem-vindo ao Super Trunfo!\n");

    printf("Vamos começar cadastrando sua primeira carta, insira o código da carta, formado pela letra do estado (A a H) e o número da cidade (01 a 04):  \n");
    scanf("%s", &card1.code);

    printf("Agora, digite a população da cidade:  \n");
    scanf("%ld", &card1.population);

    printf("Por favor, informe o área da cidade em km²:  \n");
    scanf("%ld", &card1.area);

    printf("Digite o PIB da cidade:  \n");
    scanf("%ld", &card1.PIB);

    printf("Por último, digite o número de pontos turísticos na cidade:  \n");
    scanf("%ld", &card1.numberOfTouristSpots);

    printf("Agora vamos cadastrar sua segunda carta, insira o código da carta, formado pela letra do estado (A a H) e o número da cidade (01 a 04):  \n");
    scanf("%s", &card2.code);

    printf("Agora, digite a população da cidade:  \n");
    scanf("%ld", &card2.population);

    printf("Por favor, informe o área da cidade em km²:  \n");
    scanf("%ld", &card2.area);

    printf("Digite o PIB da cidade:  \n");
    scanf("%ld", &card2.PIB);

    printf("Por último, digite o número de pontos turísticos na cidade:  \n");
    scanf("%ld", &card2.numberOfTouristSpots);

    card1.populationDensity = calculatePopulationDensity(card1.population, card1.area);

    card1.PIBPerCapita = calculatePIBPerCapita(card1.PIB, card1.population);

    card2.populationDensity = calculatePopulationDensity(card2.population, card2.area);

    card2.PIBPerCapita = calculatePIBPerCapita(card1.PIB, card2.population);

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

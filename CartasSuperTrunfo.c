#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    // Criando as duas cartas (estruturas) para armazenar as informações dos países
    struct Pais {
        char estado[100]; // Aloca um espaço para a string
        char codigo[6]; // Aloca um espaço para a string
        char cidade[100]; // Aloca um espaço para a string
        int populacao;
        float area;
        float pib;
        unsigned long int pontosTuristicos;/*alterado para unsigned long int*/
    };

    struct Pais pais1, pais2;

    // Coletando informações sobre o primeiro pais
    printf("Digite as informacoes para o primeiro Pais: \n");

    printf("digite o nome do estado: \n");
    fgets(pais1.estado, sizeof(pais1.estado), stdin);
    /* Lê uma linha de texto do usuário e armazena no campo 'estado' da estrutura 'pais1',
    Sizeof garante que o número de caracteres não ultrapasse o tamanho do array 'estado'*/

    printf("Digite a primeira letra do estado seguida de um numero de 01 a 04: \n");
    fgets(pais1.codigo, sizeof(pais1.codigo), stdin);

    printf("Digite o nome da cidade: \n");
    fgets(pais1.cidade, sizeof(pais1.cidade), stdin);

    printf("digite o numero de habitantes da cidade '.'Nao usar para separar centenas: \n");
    scanf("%lu", &pais1.populacao);//Alterado para %lu devido ao tipo da variavel unsigned long int

    printf("Digite a area da cidade em KM quadrados '.'Nao usar para separar centenas:: \n");
    scanf("%f", &pais1.area);

    printf("digite o pib da cidade '.'Nao usar para separar centenas: \n");
    scanf("%f", &pais1.pib);

    printf("digite o numero de pontos Turisticos na cidade: \n");
    scanf("%d", &pais1.pontosTuristicos);

    printf("\n");

    getchar();  // Limpar o buffer de entrada após o scanf

    // Coletando informações sobre o segundo pais
    printf("Digite as informacoes para o Segundo Pais: \n");

    printf("digite o nome do estado: \n");
    fgets(pais2.estado, sizeof(pais2.estado), stdin);

    printf("Digite a primeira letra do estado seguida de um numero de 01 a 04: \n");
    fgets(pais2.codigo, sizeof(pais2.codigo), stdin);

    printf("Digite o nome da cidade: \n");
    fgets(pais2.cidade, sizeof(pais2.cidade), stdin);

    printf("digite o numero de habitantes da cidade '.'Nao usar para separar centenas: \n");
    scanf("%lu", &pais2.populacao);//Alterado para %lu devido ao tipo da variavel unsigned long int

    printf("Digite a area da cidade em KM quadrados '.'Nao usar para separar centenas: \n");
    scanf("%f", &pais2.area);

    printf("digite o pib da cidade '.'Nao usar para separar centenas: \n");
    scanf("%f", &pais2.pib);

    printf("digite o numero de pontos Turisticos na cidade: \n");
    scanf("%d", &pais2.pontosTuristicos);

    // Variáveis para calcular a Densidade Populacional e PIB per Capita
    float densidadePopulacional1 = pais1.populacao / pais1.area;
    float pibPerCapita1 = pais1.pib / pais1.populacao;

    float densidadePopulacional2 = pais2.populacao / pais2.area;
    float pibPerCapita2 = pais2.pib / pais2.populacao;

    //Calcular "Super Poder" somando todos os atributos numéricos,incluindo inverso da densidade
    float superpoder1 = pais1.populacao + pais1.area + pais1.pib + pais1.pontosTuristicos
    + pibPerCapita1 + (1 / densidadePopulacional1);/* (1 / densidadePopulacional1) adiciona o
    inverso da densidade populacional ao Super Poder. Quanto quanto menor a densidade populacional,
    maior será o "Super Poder" do país.*/

    float superpoder2 = pais2.populacao + pais2.area + pais2.pib + pais2.pontosTuristicos
    + pibPerCapita1 + (1 / densidadePopulacional2);

    printf("\n"); // Linha em branco para separar as informações

    // Imprimindo informações sobre o primeiro pais
    printf("Informacoes do Primeiro Pais: \n\n");
    printf("Nome do Estado: %s", pais1.estado);
    printf("Codigo do Estado: %s", pais1.codigo);
    printf("Nome da Cidade: %s", pais1.cidade);
    printf("Numero de Habitantes da Cidade: %lu \n", pais1.populacao);//Alterado para %lu
    printf("Tamanho da Area: %.2f \n", pais1.area);
    printf("Pib da Cidade: %.2f \n", pais1.pib);
    printf("Numero de Pontos Turisticos: %d \n", pais1.pontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes por km2 \n", densidadePopulacional1);
    printf("PIB per Capita: %.2f \n", pibPerCapita1);
    printf("Super Poder 1: %.2f \n\n",superpoder1);

    // Imprimindo informações sobre o segundo pais
    printf("Informacoes do Segundo Pais: \n\n");
    printf("Nome do Estado: %s", pais2.estado);
    printf("Codigo do Estado: %s", pais2.codigo);
    printf("Nome da Cidade: %s", pais2.cidade);
    printf("Numero de Habitantes da Cidade: %lu \n", pais2.populacao);//Alterado para %lu
    printf("Tamanho da Area: %.2f \n", pais2.area);
    printf("Pib da Cidade: %2.f \n", pais2.pib);
    printf("Numero de Pontos Turisticos: %d \n", pais2.pontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes por km2 \n", densidadePopulacional2);
    printf("PIB per Capita: %.2f \n", pibPerCapita2);
    printf("Super Poder 2: %.2f \n\n",superpoder2);

    // Comparação de cada atributo e exibição do vencedor
    printf("Comparando Pais1 e Pais2 (eles sao como cartas):\n\n");

    /* 0 (Pais 1) 1 (Pais 2)
    Se pais1 > pais2 for verdadeiro, o valor impresso será 1.
    Se o valor de pais1 < pais2, o valor impresso será 0*/


    // Comparando População
    if (pais1.populacao > pais2.populacao) {
    // Se a população do primeiro país (pais1.populacao) for maior que a do segundo país (pais2.populacao)
    // A mensagem "Pais 1 venceu" será impressa, indicando que o primeiro país tem uma população maior
        printf("1. Comparando Populacao: Pais 1 venceu\n");
    } else if (pais1.populacao < pais2.populacao) {
    // Caso contrário, se a população do primeiro país (pais1.populacao) for menor que a do segundo país (pais2.populacao)
    // A mensagem "Pais 2 venceu" será impressa, indicando que o segundo país tem uma população maior
        printf("1. Comparando Populacao: Pais 2 venceu\n");
    } else {
    // Se a população dos dois países for igual, ou seja, se pais1.populacao for igual a pais2.populacao
    // A mensagem "Empate" será impressa, indicando que os dois países têm o mesmo número de habitantes
        printf("1. Comparando Populacao: Empate\n");
    }

    // Comparando Área
    if (pais1.area > pais2.area) {
        printf("2. Comparando Area: Pais 1 venceu\n");
    } else if (pais1.area < pais2.area) {
        printf("2. Comparando Area: Pais 2 venceu\n");
    } else {
        printf("2. Comparando Area: Empate\n");
    }

    // Comparando PIB
    if (pais1.pib > pais2.pib) {
        printf("3. Comparando PIB: Pais 1 venceu\n");
    } else if (pais1.pib < pais2.pib) {
        printf("3. Comparando PIB: Pais 2 venceu\n");
    } else {
        printf("3. Comparando PIB: Empate\n");
    }

    // Comparando Pontos Turísticos
    if (pais1.pontosTuristicos > pais2.pontosTuristicos) {
        printf("4. Comparando Pontos Turisticos: Pais 1 venceu\n");
    } else if (pais1.pontosTuristicos < pais2.pontosTuristicos) {
        printf("4. Comparando Pontos Turisticos: Pais 2 venceu\n");
    } else {
        printf("4. Comparando Pontos Turisticos: Empate\n");
    }

    // Comparando PIB per Capita
    if (pibPerCapita1 > pibPerCapita2) {
        printf("5. Comparando PIB per Capita: Pais 1 venceu\n");
    } else if (pibPerCapita1 < pibPerCapita2) {
        printf("5. Comparando PIB per Capita: Pais 2 venceu\n");
    } else {
        printf("5. Comparando PIB per Capita: Empate\n");
    }

    // Comparando Densidade Populacional (menor vence) usado '<' pois o pais com menor densidade vence
    if (densidadePopulacional1 < densidadePopulacional2) {
        printf("6. Comparando Densidade Populacional: Pais 1 venceu\n");
    } else if (densidadePopulacional1 > densidadePopulacional2) {
        printf("6. Comparando Densidade Populacional: Pais 2 venceu\n");
    } else {
        printf("6. Comparando Densidade Populacional: Empate\n");
    }

    // Comparando Super Poder
    if (superpoder1 > superpoder2) {
        printf("7. Comparando Super Poder: Pais 1 venceu\n");
    } else if (superpoder1 < superpoder2) {
        printf("7. Comparando Super Poder: Pais 2 venceu\n");
    } else {
        printf("7. Comparando Super Poder: Empate\n");
    }


    return 0;
}

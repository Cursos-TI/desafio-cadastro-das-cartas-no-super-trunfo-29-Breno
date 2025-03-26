#include <stdio.h>


struct Pais {
    char estado[100]; // Aloca um espaço para a string
    char codigo[6]; // Aloca um espaço para a string
    char cidade[100]; // Aloca um espaço para a string
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

};

int main() {


    // Criando as duas cartas (estruturas) para armazenar as informações dos países
    struct Pais pais1, pais2;

    //variaveis de calculo

    float habitantesKm2 = (float) pais1.populacao / pais1.area;
    float rendaMediaPessoa = (float) pais1.pib / pais1.populacao;

    float habitantesKm2_2 = (float) pais2.populacao / pais2.area;
    float rendaMediaPessoa_2 = (float) pais2.pib / pais2.populacao;


    // Coletando informações sobre o primeiro pais
    printf("Digite as informacoes para o primeiro Pais: \n");

     printf("digite o nome do estado: \n");
     fgets(pais1.estado, sizeof(pais1.estado), stdin); // Lê a linha inteira, incluindo espaços diferente do printf que não lê espaços.

     printf("Digite a primeira letra do estado seguida de um numero de 01 a 04: \n");
     fgets(pais1.codigo, sizeof(pais1.codigo), stdin); // Usando fgets para ler o código

     printf("Digite o nome da cidade: \n");
     fgets(pais1.cidade, sizeof(pais1.cidade), stdin); // Usando fgets para a cidade

     printf("digite o numero de habitantes da cidade: \n");
     scanf("%d", &pais1.populacao);

     printf("Digite a area da cidade em quilometros quadrados: \n");
     scanf("%f", &pais1.area);

     printf("digite o pib da cidade: \n");
     scanf("%f", &pais1.pib);

     printf("digite o numero de pontos Turisticos na cidade: \n");
     scanf("%d", &pais1.pontosTuristicos);

        // Limpar o buffer de entrada após o scanf
    getchar();  // Aqui consumimos o '\n' deixado pelo scanf


    // Coletando informações sobre o Segundo pais
   printf("Digite as informacoes para o Segundo Pais: \n");

     printf("digite o nome do estado: \n");
     fgets(pais2.estado, sizeof(pais2.estado), stdin); // Lê a linha inteira, incluindo espaços diferente do printf que não lê espaços.

     printf("Digite a primeira letra do estado seguida de um numero de 01 a 04: \n");
     fgets(pais2.codigo, sizeof(pais2.codigo), stdin); // Usando fgets para ler o código

     printf("Digite o nome da cidade: \n");
     fgets(pais2.cidade, sizeof(pais2.cidade), stdin); // Usando fgets para a cidade

     printf("digite o numero de habitantes da cidade: \n");
     scanf("%d", &pais2.populacao);

     printf("Digite a area da cidade em quilometros quadrados: \n");
     scanf("%f", &pais2.area);

     printf("digite o pib da cidade: \n");
     scanf("%f", &pais2.pib);

     printf("digite o numero de pontos Turisticos na cidade: \n");
     scanf("%d", &pais2.pontosTuristicos);

     printf("\n"); //printf para que solte uma linha em branco para separar a exibição das informações do primeiro pais

     // Calculando o número de habitantes por quilômetro quadrado e a renda média por pessoa


       // Imprimindo informações sobre o Primeiro pais
     printf("Informacoes do Primeiro Pais: \n\n");

     printf("Nome do Estado: %s",pais1.estado);
     printf("Codigo do Estado: %s",pais1.codigo);
     printf("Nome da Cidade: %s",pais1.cidade);
     printf("Numero de Habitantes da Cidade: %d \n",pais1.populacao);
     printf("Tamanho da Area: %.2f \n",pais1.area);
     printf("Pib da Cidade: %.2f \n",pais1.pib);
     printf("Numero de Pontos Turisticos: %d \n",pais1.pontosTuristicos);//usei dois \n para saltar uma liha em branco ao exibir o printf para informações do segundo pais
     printf("Numero de habitantes por quilumetro quadrado: %.2f \n", habitantesKm2);
     printf ("Riqueza media por pessoa na cidade: %.2f \n\n", rendaMediaPessoa);

       // Imprimindo informações sobre o Segundo pais
     printf("Informacoes do Segundo Pais: \n\n");

     printf("Nome do Estado: %s",pais2.estado);
     printf("Codigo do Estado: %s",pais2.codigo);
     printf("Nome da Cidade: %s",pais2.cidade);
     printf("Numero de Habitantes da Cidade: %d \n",pais2.populacao);
     printf("Tamanho da Area: %.2f \n",pais2.area);
     printf("Pib da Cidade: %.2f \n",pais2.pib);
     printf("Numero de Pontos Turisticos: %d \n",pais2.pontosTuristicos);
     printf("Numero de habitantes por quilometro quadrado: %.2f \n", habitantesKm2);
     printf ("Riqueza media por pessoa na cidade: %.2f \n", rendaMediaPessoa);

     return 0;
}

#include <stdio.h>
#include <locale.h>  // Para usar a função setlocale e definir a localidade

// Definindo a estrutura para armazenar as informações de um pais
//As structs são muito úteis para organizar dados relacionados de maneira estruturada e facilitar o trabalho de armazenar variáveis de diferentes tipos .
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

        // Definindo a localidade para usar separação de km2 com virgulas
setlocale(LC_NUMERIC, "pt_BR.UTF-8");

    // Criando as duas cartas (estruturas) para armazenar as informações dos países
    struct Pais pais1, pais2;


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

       // Imprimindo informações sobre o Primeiro pais
     printf("Informacoes do Primeiro Pais: \n\n");

     printf("Nome do Estado: %s",pais1.estado);
     printf("Codigo do Estado: %s",pais1.codigo);
     printf("Nome da Cidade: %s",pais1.cidade);
     printf("Numero de Habitantes da Cidade: %d \n",pais1.populacao);
     printf("Tamanho da Area: %.2f \n",pais1.area);
     printf("Pib da Cidade: %.2f \n",pais1.pib);
     printf("Numero de Pontos Turisticos: %d \n\n",pais1.pontosTuristicos);//usei dois \n para saltar uma liha em branco ao exibir o printf para informações do segundo pais

       // Imprimindo informações sobre o Segundo pais
     printf("Informacoes do Segundo Pais: \n\n");

     printf("Nome do Estado: %s",pais2.estado);
     printf("Codigo do Estado: %s",pais2.codigo);
     printf("Nome da Cidade: %s",pais2.cidade);
     printf("Numero de Habitantes da Cidade: %d \n",pais2.populacao);
     printf("Tamanho da Area: %.2f \n",pais2.area);
     printf("Pib da Cidade: %.2f \n",pais2.pib);
     printf("Numero de Pontos Turisticos: %d \n",pais2.pontosTuristicos);

     return 0;
}


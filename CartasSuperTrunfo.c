#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Ana Claudia Cabral

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
 
char estado;
char codigo[3], cidade[20];
int populacao, turismo;
float area, pib;


     printf("Desafio Super Trunfo - Nível 1\n");

        printf("Carta 1\n");

        printf("De A a H, informe uma letra representando um dos oito Estados Brasileiro: \n");
        scanf("%c", &estado);

        printf("Informe a letra escolhida do Estado seguida de um número de 01 a 04: \n");
        scanf("%s", &codigo);

        printf("Informe o nome de uma cidade do Estado informado anteriormente: \n");
        scanf("%s", &cidade);

        printf("Informe o número de habitantes desta Cidade: \n");
        scanf("%d", &populacao);

        printf("Informe a Área da Cidade em quilômetros quadrado: \n");
        scanf("%f", &area);

        printf("Informe o PIB desta cidade: \n");
        scanf("%f", &pib);

        printf("Informe a quantidade de pontos turísticos existentes nesta cidade: \n");
        scanf("%i", &turismo);

        printf("Carta 2\n"); 
        
        printf("De A a H, informe uma letra representando um dos oito Estados Brasileiro: \n");
        scanf("%c", &estado);

        printf("Informe a letra escolhida do Estado seguida de um número de 01 a 04: \n");
        scanf("%s", &codigo);

        printf("Informe o nome de uma cidade do Estado informado anteriormente: \n");
        scanf("%s", &cidade);

        printf("Informe o número de habitantes desta Cidade: \n");
        scanf("%d", &populacao);

        printf("Informe a Área da Cidade em quilômetros quadrado: \n");
        scanf("%f", &area);

        printf("Informe o PIB desta cidade: \n");
        scanf("%f", &pib);

        printf("Informe a quantidade de pontos turísticos existentes nesta cidade: \n");
        scanf("%i", &turismo);

        printf("Novo Commit\n");


              
      return 0;

     } 

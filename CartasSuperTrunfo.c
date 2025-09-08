#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro das Cartas
// Teste Ana Claudia Cabral

int main() {
    // Declarando variáveis
    // Cadastro das Cartas: duas cartas distintas
    // Correção das variáves!
            
char estado1, codigo1[30], cidade1[50];
int populacao1, turismo1;
float area1, pib1, densidadepopulacional1, pibpercapita1;  // dados carta 1

char estado2, codigo2[30], cidade2[50];
int populacao2, turismo2;
float area2, pib2, densidadepopulacional2, pibpercapita2;   // dados carta 2

float superpoder1, superpoder2;
int superpoder, resultadopopulacao, resultadoarea, resultadopib, resultadoturismo, resultadodensidadepopupacional, resultadopibpercapita; 

     printf("<<<< Desafio Super Trunfo - Nível 3 >>>>\n");

        printf("*** Carta 1 ***\n");

        printf("De A a H, informe uma letra representando um dos oito Estados Brasileiro: \n");
        scanf(" %c", &estado1);

        printf("Informe a letra escolhida do Estado seguida de um número de 01 a 04: \n");
        scanf(" %s", &codigo1[30]);

        printf("Informe o nome de uma cidade do Estado informado anteriormente: \n");
        scanf(" %s", &cidade1[50]);

        printf("Informe o número de habitantes desta Cidade: \n");
        scanf(" %d", &populacao1);

        printf("Informe a Área da Cidade em quilômetros quadrados: \n");
        scanf(" %f", &area1);

        printf("Informe o PIB desta cidade: \n");
        scanf(" %f", &pib1);

        printf("Informe a quantidade de pontos turísticos existentes nesta cidade: \n");
        scanf(" %i", &turismo1);

        densidadepopulacional1 = (populacao1)/area1;
        pibpercapita1 = (pib1)/populacao1;
               
                 
          //Bloco de saída de dados carta 1
        printf("<<< Dados da Carta 1 >>>\n");
        printf("Estado: %c\n", estado1);
        printf("Código Estado: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", cidade1);
        printf("População: %d habitantes\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Pontos Turísticos: %i\n",turismo1);
        printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional1);
        printf("PIB per Capita: %.2f reais \n", pibpercapita1);
        printf("Super Poder: %.2f\n", superpoder1);

        
        // Dados carta 2
        printf("*** Carta 2 ***\n"); 
        
        printf("De A a H, informe uma letra representando um dos oito Estados Brasileiro: \n");
        scanf(" %c", &estado2);

        printf("Informe a letra escolhida do Estado seguida de um número de 01 a 04: \n");
        scanf(" %s", &codigo2[30]);

        printf("Informe o nome de uma cidade do Estado informado anteriormente: \n");
        scanf(" %s", &cidade2[50]);

        printf("Informe o número de habitantes desta Cidade: \n");
        scanf(" %d", &populacao2);

        printf("Informe a Área da Cidade em quilômetros quadrado: \n");
        scanf(" %f", &area2);

        printf("Informe o PIB desta cidade: \n");
        scanf(" %f", &pib2);

        printf("Informe a quantidade de pontos turísticos existentes nesta cidade: \n");
        scanf(" %i", &turismo2);

        densidadepopulacional2 = (populacao2)/area2;
        pibpercapita2 = (pib2)/populacao2;

        //Bloco de saída de dados carta 2
        printf("<<< Dados da Carta 2 >>>\n");
        printf("Estado: %c\n", estado2);
        printf("Código Estado: %s\n", codigo2);
        printf("Nome da Cidade: %s", cidade2);
        printf("População: %d habitantes\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Pontos Turisticos: %i\n",turismo2);
        printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional2);
        printf("PIB per Capita: %.2f reais \n", pibpercapita2);
        printf("Super Poder: %.2f\n", superpoder2);

        //Comparação de propriedades das cartas e resultado Super Poder
        resultadopopulacao = (populacao1 > populacao2);
        resultadoarea = (area1 > area2);
        resultadopib = (pib1 > pib2);
        resultadoturismo = (turismo1 > turismo2);
        resultadodensidadepopupacional = (densidadepopulacional1 < densidadepopulacional2);
        resultadopibpercapita = (pibpercapita1 > pibpercapita2);
        superpoder = (superpoder1 > superpoder2);

        //Cálculo Super Poder
        superpoder1 = (float)populacao1 + area1 + pib1 + (float)turismo1 + pibpercapita1 + (1.0f / densidadepopulacional1);
        superpoder2 = (float)populacao2 + area2 + pib2 + (float)turismo2 + pibpercapita2 + (1.0f / densidadepopulacional2);

      printf("*** Comparação de Cartas ***\n");
      printf("População Carta 1 é maior que População Carta 2? (%d)\n", resultadopopulacao);
      printf("Área Carta 1 é maior que Área Carta 2? (%d)\n",resultadoarea = area1 > area2);
      printf("PIB Carta 1 é maior que PIB Carta 2? (%d)\n",resultadopib = pib1 > pib2);
      printf("Carta 1 tem mais Pontos Turísticos que Carta 2? (%d)\n", resultadoturismo = turismo1 > turismo2);
      printf("Carta 1 tem menor Densidade Populacional que Carta 2? (%d)\n", resultadodensidadepopupacional = densidadepopulacional1 < densidadepopulacional2);
      printf("PIB Per Capita de Carta 1 é maior que Carta 2? (%d)\n",resultadopibpercapita = pibpercapita1 > pibpercapita2);

      // Exibição Super Poder
      printf(" *** SUPER PODER ***\n");
      printf(" Carta 01 venceu? (%d)\n", superpoder);

      printf("Novo commit\n");  

                             
      return 0;

     } 

#include <stdio.h>
 int main() {

 char codigo1[5], codigo2[5];
 char nome1[10], nome2[10];
 float populacao1, populacao2;
 float area1, area2;
 float PIB1, PIB2;
 int ndpt1, ndpt2;  //numero de pontos turisticos
 float dpp1, dpp2; //densidade populacional  
 float PIBPC1, PIBPC2; //PIB per capital
   

printf("DESAFIO SUPERTRUNFO \n");
                 //inicio das informações da CARTA 1           
printf("        Carta 1  \n");
printf("digite o codigo do seu estado:(ex: A01,B03...) \n");
 scanf("%s", &codigo1);//armazena o codigo do estado selecionado pelo jogador

printf("digite o nome do seu estado(abreviado): \n");
 scanf("%s", &nome1);//armazena o nome do estado selecionado pelo jogador

printf("digite a população do estado(n° inteiro): \n");
 scanf("%f", &populacao1);//armazena a população do estado

printf("digite a área do estado: \n");
 scanf("%f", &area1);//armazena a area do estado

printf("digite o PIB do estado: \n");
 scanf("%f", &PIB1);//armazena o pib do estado

printf("qual o numero de pontos turisticos do seu estado: \n");
 scanf("%d", &ndpt1);//armazena o numero de pontos turisticos do estado 
 
dpp1 = populacao1 / area1; //calculo dencidade populacional
PIBPC1 = PIB1 /  populacao1 * 100000000; //calculo pib per capital, a divisão buga pora este motivo esta sendo multiplicada por 100000000
           // fim das informações da CARTA 1


printf ("\n          CARTA 2 \n");
printf("digite o codigo do seu estado:(ex: A01,B03...) \n");
 scanf("%s", &codigo2);//armazena o codigo do estado selecionado pelo jogador

printf("digite o nome do seu estado(abreviado): \n");
 scanf("%s", &nome2);//armazena o nome do estado selecionado pelo jogador

printf("digite a população do estado(n° inteiro): \n");
 scanf("%f", &populacao2);//armazena a população do estado

printf("digite a área do estado: \n");
 scanf("%f", &area2);//armazena a area do estado

printf("digite o PIB do estado: \n");
 scanf("%f", &PIB2);//armazena o pib do estado

printf("qual o numero de pontos turisticos do seu estado: \n");
 scanf("%d", &ndpt2);//armazena o numero de pontos turisticos do estado
 
dpp2 = populacao2 / area2;
PIBPC2 = PIB2 /  populacao2 * 100000000;
                //fim das informações da carta 2


                //dados coletados em ordem
printf("       CARTA 1 \n");
printf("Codigo da carta: %s  \n Nome do estado: %s  \n População: %.2f  \n", codigo1, nome1, populacao1);
printf("Área: %.2f Km² \n PIB: R$%.2f Bilhões de reais  \n Numero de pontos turisticos: %d \n", area1, PIB1, ndpt1);
printf("Dencidade populacional: %f hab/km² \n PIB per capital: %f reais \n", dpp1, PIBPC1);

printf("       CARTA 2 \n");
printf("Codigo da carta: %s  \n Nome do estado: %s  \n População: %.2f  \n", codigo2, nome2, populacao2);
printf("Área: %.2f Km² \n PIB: R$%.2f bilhoes de reais \n Numero de pontos turisticos: %d \n", area2, PIB2, ndpt2);
printf("Dencidade populacional: %.2f hab/km² \n PIB per capital: %.2f reais \n", dpp2, PIBPC2);
 
 }
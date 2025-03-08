#include <stdio.h>
 int main() {

 char codigo1[4], codigo2[4];
 char nome1[50], nome2[50];
 float populacao1, populacao2;
 float area1, area2;
 float PIB1, PIB2;
 int ndpt1, ndpt2;  //NUMERO DE PONTOS TURISTICOS     


printf("DESAFIO SUPERTRUNFO \n");
                 //inicio das informações da CARTA 1           
printf("        Carta 1  \n");
printf("digite o codigo do seu estado:(ex: A01,B03...) \n");
 scanf("%s", &codigo1);//armazena o codigo do estado selecionado pelo jogador

printf("digite o nome do seu estado(abreviado): \n");
 scanf("%s", &nome1);//armazena o nome do estado selecionado pelo jogador

printf("digite a população do estado: \n");
 scanf("%f", &populacao1);//armazena a população do estado

printf("digite a área do estado: \n");
 scanf("%f", &area1);//armazena a area do estado

printf("digite o PIB do estado: \n");
 scanf("%f", &PIB1);//armazena o pib do estado

printf("qual o numero de pontos turisticos do seu estado: \n");
 scanf("%d", &ndpt1);//armazena o numero de pontos turisticos do estado  
           // fim das informações da CARTA 1
printf("        Carta 2 \n");
printf("digite o codigo do seu estado:(ex: A01,B03...) \n");
 scanf("%s", &codigo2);//armazena o codigo do estado selecionado pelo jogador

printf("digite o nome do seu estado(abreviado): \n");
 scanf("%s", &nome2);//armazena o nome do estado selecionado pelo jogador

printf("digite a população do estado: \n");
 scanf("%f", &populacao2);//armazena a população do estado

printf("digite a área do estado: \n");
 scanf("%f", &area2);//armazena a area do estado

printf("digite o PIB do estado: \n");
 scanf("%f", &PIB2);//armazena o pib do estado

printf("qual o numero de pontos turisticos do seu estado: \n");
 scanf("%d", &ndpt2);//armazena o numero de pontos turisticos do estado
                //fim das informações da carta 2
                //dados coletados em ordem
printf("       CARTA 1 \n");
printf("Codigo da carta: %s   Nome do estado: %s   População: %.3f  \n", codigo1, nome1, populacao1);
printf("Área: %.3f Km²  PIB: R$%.3f   Numero de pontos turisticos: %d \n", area1, PIB1, ndpt1);

printf("       CARTA 2 \n");
printf("Codigo da carta: %s   Nome do estado: %s   População: %.3f \n", codigo2, nome2, populacao2);
printf("Área: %.3f Km²  PIB: R$%.3f   Numero de pontos turisticos: %d \n", area2, PIB2, ndpt2);
 
 }
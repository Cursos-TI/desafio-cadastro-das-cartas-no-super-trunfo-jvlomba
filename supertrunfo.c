#include <stdio.h>
 int main() {

 char codigo1 [10], codigo2 [10];
 char nome1[10], nome2[10];
 float populacao1, populacao2;
 float area1, area2;
 float PIB1, PIB2;
 int ndpt1, ndpt2;  //numero de pontos turisticos
 float dpp1, dpp2; //densidade populacional  
 float PIBPC1, PIBPC2; //PIB per capital
 float superpoder1, superpoder2;  

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
PIBPC1 = PIB1 /  populacao1 * 100000000; //calculo pib per capital
superpoder1 = populacao1 + area1 + PIB1 + ndpt1 + PIBPC1 + (1/dpp1); //calculo do super poder
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
 
dpp2 = populacao2 / area2; // calculo da dencidade populacional
PIBPC2 = PIB2 /  populacao2 * 100000000; //calculo do pib per capital 
superpoder2 = populacao2 + area2 + PIB2 + ndpt2 + PIBPC2 + (1/dpp2); // calculo do super poder
                //fim das informações da carta 2


                //dados coletados em ordem
printf("\n       CARTA 1 \n\n");
printf("Codigo da carta: %s  \n Nome do estado: %s  \n População: %.0f  \n", codigo1, nome1, populacao1);
printf("Área: %.2f Km² \n PIB: R$%.2f Bilhões de reais  \n Numero de pontos turisticos: %d \n", area1, PIB1, ndpt1);
printf("Dencidade populacional: %.2f hab/km² \n PIB per capital: %.2f reais \n", dpp1, PIBPC1);
printf("Super poder: %.0f \n\n", superpoder1); // fim das informações da carta 1

printf("       CARTA 2 \n\n");
printf("Codigo da carta: %s  \n Nome do estado: %s  \n População: %.0f  \n", codigo2, nome2, populacao2);
printf("Área: %.2f Km² \n PIB: R$%.2f bilhoes de reais \n Numero de pontos turisticos: %d \n", area2, PIB2, ndpt2);
printf("Dencidade populacional: %.2f hab/km² \n PIB per capital: %.2f reais \n", dpp2, PIBPC2);
printf("Super poder: %.0f \n\n", superpoder2); //fim das informações da carta 2

//resultado da comparação das cartas 1 e 2
printf("      !!*****RESULTADO*****!! \n");
printf("Se o resultado for (1) a CARTA 1 ganhou se o resultado for (0) a CARTA 2 ganhou. \n"); // informações sobre como funciona o calculo de quem venceu 
printf("população: (%d) \n", populacao1 > populacao2); // população caomparação
printf("Área: (%d) \n", area1 > area2); //área comparação
printf("PIB: (%d) \n", PIB1 > PIB2); //pib comparação
printf("Numero de pontos turisticos: (%d) \n", ndpt1 > ndpt2); //numero de pontos turisticos comparação
printf("Dencidade populacional: (%d) \n", (1/dpp1 > 1/dpp2)); //dencidade populacional comparação
printf("PIB per capital: (%d) \n", PIBPC1 > PIBPC2); //pib per capital comparação 
printf("super poder: (%d)", superpoder1 > superpoder2); // super poder comparação
//fim da codificação



 }
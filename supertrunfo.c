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
 float superpoder1, superpoder2;
 int comparacao, comparacao2;

printf("     ***DESAFIO SUPERTRUNFO*** \n");
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

printf("qual o numero de pontos turisticos do seu estado:\n");
scanf("%d", &ndpt2 );//armazena o numero de pontos turisticos do estado
 
dpp2 = populacao2 / area2; // calculo da dencidade populacional
PIBPC2 = PIB2 /  populacao2 * 100000000; //calculo do pib per capital 
superpoder2 = populacao2 + area2 + PIB2 + ndpt2 + PIBPC2 + (1/dpp2); // calculo do super poder
                //fim das informações da carta 2

                //dados coletados em ordem
printf("\n       CARTA 1 \n");
printf("Codigo da carta: %s  \nNome do estado: %s  \nPopulação: %.0f  \n", codigo1, nome1, populacao1);
printf("Área: %.2f Km² \nPIB: R$%.2f Bilhões de reais  \nNumero de pontos turisticos: %d \n", area1, PIB1, ndpt1);
printf("Dencidade populacional: %.2f hab/km² \nPIB per capital: %.2f reais \n", dpp1, PIBPC1);
printf("Super poder: %.0f \n", superpoder1); // fim das informações da carta 1

printf("\n       CARTA 2 \n");
printf("Codigo da carta: %s  \nNome do estado: %s  \nPopulação: %.0f  \n", codigo2, nome2, populacao2);
printf("Área: %.2f Km² \n PIB: R$%.2f bilhoes de reais \nNumero de pontos turisticos: %d \n", area2, PIB2, ndpt2);
printf("Dencidade populacional: %.2f hab/km² \nPIB per capital: %.2f reais \n", dpp2, PIBPC2);
printf("Super poder: %.0f \n", superpoder2); //fim das informações da carta 2


int atributo1, atributo01, atributo2, atributo02, resultado1, resultado2;


//resultado da comparação das cartas 1 e 2
printf("\n      !!*****DISPUTA DE COMPARAÇÃO*****!! \n");
printf("REGRA: Vence a carta com maior valor no atributo escolhido, Exeto na dencidade populacional onde a menor carta vence. \n");
printf("Escolha o atributo para realizar a comparação:\n");
printf("1. população \n");
printf("2. Área \n");
printf("3. PIB \n");
printf("4. Numero de pontos turistico \n");
printf("5. Dencidade populacional \n");
printf("6. PIB per capital \n");
printf("Digite qual atributo voce deseja comparar: \n");
scanf("%d", &comparacao);


switch (comparacao) {
case 1: 
printf("Comparação da populaçao de %s: %.0f VS população %s = %.0f \n", nome1, populacao1, nome2, populacao2);
resultado1 = (populacao1 > populacao2) ? 1 : 0;
atributo1 = populacao1;
atributo2 = populacao2;
  break;
case 2: 
printf("Comparação da Área de %s: %.2f VS Área %s: %.2f \n", nome1, area1, nome2, area2);
resultado1 = (area1 > area2) ? 1 : 0;
atributo1 = area1;
atributo2 = area2;
  break;
case 3: 
printf("Comparação do PIB de %s: %.2f VS PIB de %s: %f \n", nome1, PIB1, nome2, PIB2);
resultado1 = (PIB1 > PIB2) ? 1 : 0;
atributo1 = PIB1;
atributo2 = PIB2;
  break;
case 4:
printf("Comparação do numero de pontos turisticos de %s: %d VS numero de pontos turisticos de %s: %d \n", nome1, ndpt1, nome2, ndpt2);
resultado1 = (ndpt1 > ndpt2) ? 1 : 0;
atributo1 = ndpt1;
atributo2 = ndpt2;
  break;  
case 5:
printf("comparação da dencidade populacional de %s: %.2f VS dencidade populacional de %s: %.2f \n", nome1, dpp1, nome2, dpp2);
resultado1 = (dpp1 < dpp2) ? 1 : 0;
atributo1 = dpp1;
atributo2 = dpp2;
  break;
case 6:
printf("Comparação de PIB per capital de %s: %.2f VS PIB per capital de %s: %.2f \n", nome1, PIBPC1, nome2, PIBPC2);
resultado1 = (PIBPC1 > PIBPC2) ? 1 : 0;
atributo1 = PIBPC1;
atributo2 = PIBPC2;
  break;
default:
printf(" Opção invalida!!!");
  break;
}
resultado1 == 1 ? printf("carta 1 (%s) venceu!! \n\n", nome1) : printf("carta 2 (%s) venceu!! \n\n", nome2);

printf("          *** Segunda comparação *** \n");
printf("Escolha outro atributo para realizar a comparação:\n");
printf("1. população \n");
printf("2. Área \n");
printf("3. PIB \n");
printf("4. Numero de pontos turistico \n");
printf("5. Dencidade populacional \n");
printf("6. PIB per capital \n");
printf("Digite qual atributo voce deseja comparar: \n");
scanf("%d", &comparacao2);


if (comparacao != comparacao2) {
switch (comparacao2) {
case 1: 
printf("Comparação da populaçao de %s: %.0f VS população %s = %.0f \n", nome1, populacao1, nome2, populacao2);
resultado2 = (populacao1 > populacao2) ? 1 : 0;
atributo01 = populacao1;
atributo02 = populacao2;
  break;
case 2: 
printf("Comparação da Área de %s: %.2f VS Área %s: %.2f \n", nome1, area1, nome2, area2);
resultado2 = (area1 > area2) ? 1 : 0;
atributo01 = area1;
atributo02 = area2;
  break;
case 3: 
printf("Comparação do PIB de %s: %.2f VS PIB de %s: %f \n", nome1, PIB1, nome2, PIB2);
resultado2 = (PIB1 > PIB2) ? 1 : 0;
atributo01 = PIB1;
atributo02 = PIB2;
  break;
case 4:
printf("Comparação do numero de pontos turisticos de %s: %d VS numero de pontos turisticos de %s: %d \n", nome1, ndpt1, nome2, ndpt2);
resultado2 = (ndpt1 > ndpt2) ? 1 : 0;
atributo01 = ndpt1;
atributo02 = ndpt2;
  break;  
case 5:
printf("comparação da dencidade populacional de %s: %.2f VS dencidade populacional de %s: %.2f \n", nome1, dpp1, nome2, dpp2);
resultado2 = (dpp1 < dpp2) ? 1 : 0;
atributo01= dpp1;
atributo02 = dpp2;
  break;
case 6:
printf("Comparação de PIB per capital de %s: %.2f VS PIB per capital de %s: %.2f \n", nome1, PIBPC1, nome2, PIBPC2);
resultado2 = (PIBPC1 > PIBPC2) ? 1 : 0;
atributo01 = PIBPC1;
atributo02 = PIBPC2;
  break;
default:
printf(" Opção invalida!!!");
  break;
} } else{ 
printf("Você escolheu o mesmo atributo!!!, recomece o jogo");
} 
resultado2 == 1 ? printf("carta 1 (%s) venceu!!", nome1) : printf("carta 2 (%s) venceu!! \n\n", nome2);


int soma1, soma2;// variavel da soma dos atributos escolhidos nas 2 etapas anterior
int resultadofinal, pergunta1;


printf("\n Você deseja realizar a soma dos atributos esolhidos pra realizar mais uma disputa? \n");
printf("[1]Sim\n[2]Não \n");
scanf("%d", &pergunta1);
 
if (pergunta1 == 1){
printf("realizando a soma dos atributos de cada carta... \n");
soma1 = atributo1 + atributo01;
soma2 = atributo2 + atributo02; 
printf("Carta 1 %d pontos VS carta 2 %d pontos \n", soma1, soma2);
resultadofinal = (soma1 > soma2) ? printf("A carta 1 ganhou com %d pontos \n", soma1) : printf("A carta 2 ganhou com %d pontos \n", soma2);
printf("Fim do jogo, Obrigado por jogar!!! \n");
} else if (pergunta1 == 2){
printf("O jogo terminou!, Obrigado por jogar. \n");
} else {
printf("Opção invalida, Fim do jogo oobrigado por jogar! \n"); 
}

//fim da codificação



 }
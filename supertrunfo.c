#include <stdio.h>
 int main() {

 char codigo1[5], codigo2[5];
 char nome1[10], nome2[10];
 float populacao1 = 12325000, populacao2 = 6748000;
 float area1 = 1521.11, area2 = 1200.25;
 float PIB1 = 699.28, PIB2 = 300.50;
 int ndpt1 = 50, ndpt2 = 30;  //numero de pontos turisticos
 float dpp1, dpp2; //densidade populacional  
 float PIBPC1, PIBPC2; //PIB per capital
 float superpoder1, superpoder2;
 int comparação;
// os scans estão comentados para facilitar o teste do switch será funcional na entraga final do projeto.
printf("DESAFIO SUPERTRUNFO \n");
                 //inicio das informações da CARTA 1           
printf("        Carta 1  \n");
printf("digite o codigo do seu estado:(ex: A01,B03...) \n");
// scanf("%s", &codigo1);//armazena o codigo do estado selecionado pelo jogador

printf("digite o nome do seu estado(abreviado): \n");
// scanf("%s", &nome1);//armazena o nome do estado selecionado pelo jogador

printf("digite a população do estado(n° inteiro): \n");
// scanf("%f", &populacao1);//armazena a população do estado

printf("digite a área do estado: \n");
 //scanf("%f", &area1);//armazena a area do estado

printf("digite o PIB do estado: \n");
 //scanf("%f", &PIB1);//armazena o pib do estado

printf("qual o numero de pontos turisticos do seu estado: \n");
 //scanf("%d", &ndpt1);//armazena o numero de pontos turisticos do estado 
 
dpp1 = populacao1 / area1; //calculo dencidade populacional
PIBPC1 = PIB1 /  populacao1 * 100000000; //calculo pib per capital
superpoder1 = populacao1 + area1 + PIB1 + ndpt1 + PIBPC1 + (1/dpp1); //calculo do super poder
           // fim das informações da CARTA 1


printf ("\n          CARTA 2 \n");
printf("digite o codigo do seu estado:(ex: A01,B03...) \n");
 //scanf("%s", &codigo2);//armazena o codigo do estado selecionado pelo jogador

printf("digite o nome do seu estado(abreviado): \n");
 //scanf("%s", &nome2);//armazena o nome do estado selecionado pelo jogador

printf("digite a população do estado(n° inteiro): \n");
// scanf("%f", &populacao2);//armazena a população do estado

printf("digite a área do estado: \n");
/// scanf("%f", &area2);//armazena a area do estado

printf("digite o PIB do estado: \n");
 //scanf("%f", &PIB2);//armazena o pib do estado

printf("qual o numero de pontos turisticos do seu estado:\n");
// scanf("%d", &ndpt2 );//armazena o numero de pontos turisticos do estado
 
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

//resultado da comparação das cartas 1 e 2
printf("\n      !!*****DISPUTA DE COMPARAÇÃO*****!! \n");
printf("REGRA: Vence a carta com maior valor no atributo escolhido, Exeto na dencidade populacional onde a menor carta vence. \n");
printf("Escolha uma opção para realizar a comparação: \n");
printf("1. população \n");
printf("2. Área \n");
printf("3. PIB \n");
printf("4. Numero de pontos turistico \n");
printf("5. Dencidade populacional \n");
printf("6. PIB per capital \n");
printf("7. Super poder \n");
printf("Digite qual atributo voce deseja comparar: \n");
scanf("%d", &comparação);



switch (comparação) {
case 1:
  printf("Comparação da populaçao de %s: %.0f VS população de %s = %.0f \n", nome1, populacao1, nome2, populacao2);
    if (populacao1 == populacao2) {
      printf("Os atributos empataram!!! \n");
    } else if (populacao1 > populacao2) {
      printf("A carta 1 venceu na disputa de população. \n");      
    } else {
      printf("A carta 2 venceu na disputa de população \n");
    } break; // comparação da população em switch após a escolha do jogador
case 2:
  printf("Comparação da Área de %s: %f VS Área de %s: %.0f \n", nome1, area1, nome2, area2);
    if (area1 == area2) {
      printf("os atributos empataram!!!");
    } else if (area1 > area2) {
      printf("A carta 1 venceu na disputa de área \n");
    } else {
      printf("A carta 2 venceu na disputa de área \n");
    } break; // comparação da Área em switch após a escolha do jogador
case 3:
  printf("Comparação do PIB de %s: %.2f VS PIB de %s: %f \n", nome1, PIB1, nome2, PIB2);
    if (PIB1 == PIB2) {
      printf("Os atributos empataram \n");      
    } else if (PIB1 > PIB2) {
      printf("A carta 1 venceu na disputa de PIB \n");      
    } else {
      printf("A carata 2 venceu na disputa de PIB \n");
    } break; // comparação do PIB em switch após a escolha do jogador
case 4:
  printf("Comparação do numero de pontos turisticos de %s: %d VS numero de pontos turisticos de %s: %d \n", nome1, ndpt1, nome2, ndpt2);
   if (ndpt1 == ndpt2) {
     printf("Os atributos empataram \n");
   } else if (ndpt1 > ndpt2) {
     printf("A carta 1 venceu na disputa de pontos turisticos \n");
   } else {
     printf("A carta 2 venceu na disputa de pontos turisticos \n");   
   } break; // comparação do numero de pontos turisticos em switch após a escolha do jogador
case 5:
  printf("comparação da dencidade populacional de %s: %.2f VS dencidade populacional de %s: %.2f \n", nome1, dpp1, nome2, dpp2);
   if (dpp1 == dpp2) {
     printf("Os atributos empataram \n");
   } else if (dpp1 < dpp2) {
     printf("A carta 1 venceu na disputa de dencidade populacional \n");
   } else {
     printf("A carta 2 venceu na disputa de dencidade populacional \n");   
   } break; // comparação da dencidade populacional em switch após a escolha do jogador
case 6:
  printf("Comparação de PIB per capital de %s: %.2f VS PIB per capital de %s: %.2f \n", nome1, PIBPC1, nome2, PIBPC2);
   if (PIBPC1 == PIBPC2) {
     printf("Os atributos empataram \n");
   } else if (PIBPC1 > PIBPC2) {
     printf("A carta 1 venceu na disputa de PIB per capital \n");
   } else {
     printf("A carta 2 venceu na disputa de PIB per capital \n");     
   } break; // comparação do PIB per capital em switch após a escolha do jogador
case 7:
  printf("Comparação de super poder da carta 1: %.0f VS super poder da carta 2: %0.f \n", superpoder1, superpoder2);
   if (superpoder1 == superpoder2) {
    printf("OS atributos empataram \n");
   } else if (superpoder1 > superpoder2) {
     printf("A carta 1 venceu na disputa de super poder \n");
   } else {
     printf("A carta 2 venceu na diputa de super poder \n");
   } break; // comparação do super poder em switch após a escolha do jogador
default:
    printf("Nenhum atributo foi selecionado opção invalida!!!");
  break; // informação que aparecerá na tela caso o jogador escolha alguma opção invalida
}
// etapa anterior comentada para n afetar no código
// if (populacao1 > populacao2)
//{ printf("CARTA 1 venceu na disputa de População: %.0f \n", populacao1);    
//} else {
//  printf("CARTA 2 venceu na disputa de População: %.0f \n", populacao2);
//} // disputa de população

//if (area1 > area2)
//{ printf("CARTA 1 venceu na disputa de Área: %.2f \n", area1);
//} else {
//  printf("CARTA 2 venceu na disputa de Área: %.2f \n", area2);
//} // disputa de área

//if (PIB1 > PIB2)
//{ printf("CARTA 1 venceu na disputa de PIB: R$%.2f \n", PIB1);
//} else {
 // printf("CARATA 2 venceu na disputa de PIB: R$%.2f \n", PIB2);  
//} // disputa de PIB

//if (ndpt1 > ndpt2)
//{ printf("CARTA 1 venceu na disputa de Pontos turisticos: %d \n", ndpt1);
//} else {
//  printf("CARTA 2 venceu na disputa de Pontos turisticos: %d \n", ndpt2);      
//} // disputa de numero de pontos turisticos

//if (dpp1 < dpp2)
//{ printf("CARTA 1 venceu na disputa de Dencidade populacional: %.2f \n", dpp1);
//} else {
//  printf("CARTA 2 venceu na disputa de Dencidade populacional: %.2f \n", dpp2);  
//} // disputa de dencidade 

//if (PIBPC1 > PIBPC2)
//{ printf("CARTA 1 venceu na disputa de PIB per capital: %.2f \n", PIBPC1);
//} else {
//  printf("CARTA 2 venceu na disputa de PIB per capital: %.2f\n", PIBPC2);      
//} //disputa de PIB per capital

//if (superpoder1 > superpoder2)
//{ printf("CARTA 1 na disputa de super poder: %.0f\n", superpoder1);    
//} else {
//  printf("CARTA 2 venceu na disputa de super poder: %.0f \n", superpoder2);
//} //disputa de super poder

//fim da codificação



 }
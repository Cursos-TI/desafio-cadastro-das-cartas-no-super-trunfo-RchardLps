#include <stdio.h>

int main(){
  
    /*VARIAVEIS CARTA B01*/
    
    char estado01[20], codigo_carta01[5], nome_cidade01[20];
    int populacao01, pontos_tu01;
    float area01, pib01;

    printf(" ** Bem vindo ao jogo super trunfo! **\n");
    
    /*CARTA B01*/

    printf("Selecione o estado: ");
      scanf(" %s", estado01);
    printf("Selecione o codigo da carta: ");
      scanf("%s", codigo_carta01);
    printf("Selecione o nome da cidade: ");
      scanf("%s", nome_cidade01);
    
    printf("por favor coloque a população: ");
      scanf("%d", &populacao01);
    printf("os pontos turisticos: ");
      scanf("%d", &pontos_tu01);
    printf("a área: ");
      scanf("%f", &area01);
    printf("o PIB: ");
      scanf("%f", &pib01);

 
  /*informação para o usuario de troca de carta*/

 printf("==== Parabens você terminou uma carta !==== \n Agora vamos para a segunda carta\n");
    
   /*VARIAVEIS CARTA B02*/
   
   char estado02[20], codigo_carta02[5], nome_cidade02[20];
   int populacao02, pontos_tu02;
   float area02, pib02;

    /*CARTA B02*/

    printf("Selecione o estado: ");
      scanf("%s", estado02);
    printf("Selecione o codigo da carta: ");
      scanf("%s", codigo_carta02);
    printf("Selecione o nome da cidade: ");
      scanf("%s", nome_cidade02);
   
    printf("por favor coloque a população: ");
      scanf("%d", &populacao02);
    printf("os pontos turisticos: ");
      scanf("%d", &pontos_tu02);
    printf("a área: ");
      scanf("%f", &area02);
    printf("o PIB: ");
      scanf("%f", &pib02);

      /*PARA O TERMINAL */
    
 printf("    *SUPER TRUNFO PAISES*\n");
    
    /*CARTA B01*/
    
    printf("\n- Estado: %s\n", estado01);
    printf("- Código da carta: %s\n", codigo_carta01);
    printf("- Nome da cidade: %s\n", nome_cidade01);
    printf("- População: %dmil\n", populacao01);
    printf("- Área: %.2fkm²\n", area01);
    printf("- PIB: R$%.2f\n", pib01);
    printf("- Número de pontos turísticos: %d\n", pontos_tu01);
    
    /*CARTA B02*/
    
    printf("\n- Estado: %s\n", estado02);
    printf("- Código da carta: %s\n", codigo_carta02);
    printf("- Nome da cidade: %s\n", nome_cidade02); 
    printf("- População: %i\n", populacao02);
    printf("- Área: %.2fkm²\n", area02);
    printf("- PIB: R$%.2f\n", pib02);
    printf("- Número de pontos turísticos: %i\n", pontos_tu02);
   
    return 0;
}
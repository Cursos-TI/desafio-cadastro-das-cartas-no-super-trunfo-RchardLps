#include <stdio.h>

int main(){
  
    /*VARIAVEIS CARTA B01*/
    
    char estado01[20], codigo_carta01[5], nome_cidade01[20];
    unsigned long int populacao01;
    int pontos_tu01;
    float area01, pib01;
    float den_popu01, pibper01;
    int super_poder01;

    printf(" ** Bem vindo ao jogo super trunfo! **\n");
    
    /*CARTA B01*/

    printf("Selecione o estado: ");
      scanf(" %s", estado01);
    printf("Selecione o codigo da carta: ");
      scanf("%s", codigo_carta01);
    printf("Selecione o nome da cidade: ");
      scanf("%s", nome_cidade01);
    
    printf("por favor coloque a população: ");
      scanf(" %u", &populacao01);
    printf("os pontos turisticos: ");
      scanf("%d", &pontos_tu01);
    printf("a área: ");
      scanf("%f", &area01);
    printf("o PIB: ");
      scanf("%f", &pib01);

     /*operador matematico de divisão carta01*/

    den_popu01 = (float) populacao01 / area01;
    pibper01 = (float) populacao01 / pib01;
    super_poder01 = (float) populacao01 + area01 + pontos_tu01 + pib01 + pibper01;

 
  /*informação para o usuario de troca de carta*/

 printf("==== Parabens você terminou uma carta !==== \n Agora vamos para a segunda carta\n");
    
   /*VARIAVEIS CARTA B02*/
   
   char estado02[20], codigo_carta02[5], nome_cidade02[20];
   unsigned long int populacao02;
   int pontos_tu02;
   float area02, pib02;
   float den_popu02, pibper02;
   int super_poder02;

    /*CARTA B02*/

    printf("Selecione o estado: ");
      scanf(" %s", estado02);
    printf("Selecione o codigo da carta: ");
      scanf(" %s", codigo_carta02);
    printf("Selecione o nome da cidade: ");
      scanf(" %s", nome_cidade02);
   
    printf("por favor coloque a população: ");
      scanf("%u", &populacao02);
    printf("os pontos turisticos: ");
      scanf("%d", &pontos_tu02);
    printf("a área: ");
      scanf("%f", &area02);
    printf("o PIB: ");
      scanf("%f", &pib02);

     /*operador matematico de divisão carta02*/

    den_popu02 = (float) populacao02 / area01;
    pibper02 = (float) populacao02/ pib02;
    super_poder02 = (float) populacao02 + area02 + pontos_tu02 + pib02 + pibper02;
    
 printf("    *SUPER TRUNFO PAISES*\n");
    
    /*CARTA B01*/
    
    printf("\n- Estado: %s\n", estado01);
    printf("- Código da carta: %s\n", codigo_carta01);
    printf("- Nome da cidade: %s\n", nome_cidade01);
    printf("- População: %u mil\n", populacao01);
    printf("- Área: %.2f km²\n", area01);
    printf("- PIB: R$ %.2f\n", pib01);
    printf("- Número de pontos turísticos: %d\n", pontos_tu01);
    printf("- Densidade populacional: %.2f\n", den_popu01);
    printf("- Pib per capita: %.2f\n", pibper01);
    printf("- Super poder %d\n", super_poder01);

    /*CARTA B02*/
    
    printf("\n- Estado: %s\n", estado02);
    printf("- Código da carta: %s\n", codigo_carta02);
    printf("- Nome da cidade: %s\n", nome_cidade02); 
    printf("- População: %u mil\n", populacao02);
    printf("- Área: %.2f km²\n", area02);
    printf("- PIB: R$ %.2f\n", pib02);
    printf("- Número de pontos turísticos: %i\n", pontos_tu02);
    printf("- Densidade populacional: %.2f\n", den_popu02);
    printf("- Pib per capita: %.2f\n", pibper02);
    printf("- Super poder %d\n", super_poder02);


    //comparação das cartas:

    printf("  \n***COMPARAÇÃO DAS CARTAS***\n");
    printf("População: carta 01 venceu (%u)\n", (populacao01 > populacao02));
    printf("Área: carta 01 venceu (%d)\n", (area01 > area02)); 
    printf("PIB: carta 01 venceu (%d)\n", (pib01 > pib02)); 
    printf("Pontos turísticos: carta 01 venceu (%d)\n", (pontos_tu01 > pontos_tu02));
    printf("Densidade populacional: carta 01 venceu (%.f)\n", (den_popu01 < den_popu02));
    printf("PIB per capita: carta 01 venceu  (%.f)\n", (pibper01 > pibper02)); 
    printf("Super poder: carta 01 (%d)\n", (super_poder01 > super_poder02)); 


    return 0;

}
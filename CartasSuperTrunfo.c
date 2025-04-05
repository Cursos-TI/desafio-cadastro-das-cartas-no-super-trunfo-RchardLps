#include <stdio.h>

int main (){
 
  // carta B01(BAHIA - SALVADOR)
 
 char estado01[20] = "BAHIA", codigo_carta01[5] = "B01", nome_cidade01[20] = "Salvador";
 int populacao01 = 2000000 , pontos_turisticos01 = 25; 
 float area01 = 693.8, pib01 = 62954487.49;

 printf("    *SUPER TRUNFO PAISES*\n");
 printf("\n- Estado: %s\n", estado01);
 printf("- Código da carta: %s\n", codigo_carta01);
 printf("- Nome da cidade: %s\n", nome_cidade01);
 printf("- População: %i\n", populacao01);
 printf("- Área: %.2fkm²\n", area01);
 printf("- PIB: R$%.2f\n", pib01);
 printf("- Número de pontos turísticos: %i\n", pontos_turisticos01);

  // carta B02(BAHIA - ITACARÉ)
 
 char estado02[20] = "BAHIA", codigo_carta02[5] = "B02", nome_cidade02[20] = "Itacaré";
 int populacao02 = 30350, pontos_turisticos02 = 10;
 float area02 = 7262.65, pib02 = 14680.53;

 printf("\n- Estado: %s\n", estado02);
 printf("- Código da carta: %s\n", codigo_carta02);
 printf("- Nome da cidade: %s\n", nome_cidade02); 
 printf("- População: %i\n", populacao02);
 printf("- Área: %.2fkm²\n", area02);
 printf("- PIB: R$%.2f\n", pib02);
 printf("- Número de pontos turísticos: %i\n", pontos_turisticos02);
   
    
   return 0;

}
#include <stdio.h>

        int main(){

          int Paises;       

         float codigoCidade;
          int Populaçao;
          float Area;
          float Pib;
          int NumeroDeTuristas;

          printf("Digite o codigo da Cidade: \n");
          scanf("%d", &codigoCidade);
        
          printf("Digite numero referente a Populaçao: \n");
          scanf("%f", &Populaçao);

          printf("Digite numero referente a Area: \n");
          scanf("%f",&Area);

          printf("Digite o numero referente ao Pib: \n");
          scanf("%f", &Pib);

          printf("Digite numero referente a Pontos Turisticos: \n");
          scanf("%d", &NumeroDeTuristas);

          printf("codigo da cidade: %d   -  numero populaçao:  %f \n", codigoCidade, Populaçao);
        
          printf("numero area: %2f  -  numero pib: %f  - Numero turistas: %f \n", Area, Pib, NumeroDeTuristas);

        
            return 0;










        }
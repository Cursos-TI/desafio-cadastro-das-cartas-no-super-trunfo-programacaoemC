#include <stdio.h>

    int main(){

        printf("desafio Novato Super Trunfo\n");

       char Estado1, Estado2;

       char Codigo1[4] , Codigo2[4];

       char Cidade1[20], Cidade2[20];

       int Populacao1 , Populacao2;

       int Turismo1 , Turismo2;

       float Area1 , Area2;

       float Pib1 , Pib2;

///Carta1/////

        printf("Digite o codigo do Estado1: \n");
        scanf("%c", &Estado1);

        printf("Digite o codigo da Carta1: \n ");
        scanf("%s", &Codigo1);

        printf("Digite o nome da Cidade1: \n");
        scanf("%s", &Cidade1);

        printf("Digite o numero referente a populacao: \n ");
        scanf("%d", &Populacao1);

        printf("Digite o numero de pontos turisticos: \n");
        scanf("%d", &Turismo1);

        printf("Digite o numero referente a Area1: \n");
        scanf("%f", &Area1);

        printf("Digite o numero referente ao Pib1: \n");
        scanf("%f", &Pib1);

        ////Saida de Dados Carta1

        printf("Estado: %c\n", Estado1);
        printf("Codigo: %s\n", Codigo1);
        printf("Cidade: %s\n", Cidade1);
        printf("Populacao: %d\n", Populacao1);
        printf("Turismo: %d\n", Turismo1);
        printf("Area: %.2f km²\n", Area1);
        printf("Pib: %.2f bilhoes de reais\n", Pib1);


        /////Carta2

        printf("Digite o codigo do Estado2: \n");
        scanf("%c", &Estado2);

        printf("Digite o codigo da Carta2:\n");
        scanf("%s", &Codigo2);

        printf(" Digite o nome da Cidade2: \n");
        scanf("%s", &Cidade2);

        printf("Digite o numero referente a Populacao2: \n ");
        scanf("%d", &Populacao2);

        printf("Digite o numero referente pontos turisticos2: \n");
        scanf("%d", &Turismo2);

        printf("Digite numero referente a Area2: \n");
        scanf("%f", &Area2);

        printf("Digite numero referente ao Pib2: \n");
        scanf("%f", &Pib2);
        
        /// Saida Carta2

        printf("Estado: %c\n", Estado2);
        printf("Codigo: %s\n", Codigo2);
        printf("Cidade: %s\n", Cidade2);
        printf("Populacao: %d\n", Populacao2);
        printf("Turismo: %d\n", Turismo2);
        printf("Area: %.2f km²\n", Area2);
        printf("Pib: %.2f bilhoes de reais\n", Pib2);
        
        return 0;
        



    
   







    }
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main(){

        printf("desafio Novato Super Trunfo\n");

       char Estado1[20], Estado2[20];

       int Codigo1, Codigo2;

       char Cidade1[20], Cidade2[20];

       int Populacao1 , Populacao2;

       int Turismo1 , Turismo2;

       float Area1 , Area2;

       float Pib1 , Pib2;

///Carta1/////

        printf("Digite o Nome do Estado1: \n");
        scanf("%s", &Estado1);

        printf("Digite o codigo da Carta1: \n ");
        scanf("%d", &Codigo1);

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

        printf("Estado: %s\n", Estado1);
        printf("Codigo: %d\n", Codigo1);
        printf("Cidade: %s\n", Cidade1);
        printf("Populacao: %d\n", Populacao1);
        printf("Turismo: %d\n", Turismo1);
        printf("Area: %.2f km²\n", Area1);
        printf("Pib: %.2f bilhoes de reais\n", Pib1);


        /////Carta2

        printf("Digite o Nome do Estado2: \n");
        scanf("%s", &Estado2);

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

        printf("Estado: %s\n", Estado2);
        printf("Codigo: %d\n", Codigo2);
        printf("Cidade: %s\n", Cidade2);
        printf("Populacao: %d\n", Populacao2);
        printf("Turismo: %d\n", Turismo2);
        printf("Area: %.2f km²\n", Area2);
        printf("Pib: %.2f bilhoes de reais\n", Pib2);
        
        ///***Calculo Total Populacao/Area/PIB***///
      
      unsigned TotalPopulacao;
      unsigned TotalArea;
      unsigned TotalPIB;
      float DensidadeP;
      float PIBPerCapita;

      TotalPIB = Pib1 + Pib2;
      TotalPopulacao = Populacao1 + Populacao2;
      TotalArea = Area1 + Area2;

      DensidadeP = (float)  TotalPopulacao / TotalArea;
      PIBPerCapita = (float) TotalPIB / TotalPopulacao;
      
       /*EXIBIÇÃO*/
       
       printf("Densidade Populacional Total: %.2f \n", DensidadeP);
       printf("PIB Per Capita Total: %.2f \n", PIBPerCapita);


       /*Comparação Das Cartas*/

    //******Atributo 1°(População)******//

        if (Populacao1 >= Populacao2) { 
        
            printf("Populacao1 venceu!!!\n");
         }
        else {
            printf("Populacao2 venceu!!!\n");
        }
       
        
        
        /******Atributo 2° (Area)*******/
        
        if (Area1 < Area2 ) {
            printf("Area1 Venceu!!!\n");

        } else {
            printf("Area2 Venceu!!!\n");

        }
        
        //*****Menu Interativo Switch***//

        //Declarando Variaveis//

        int opcao;
        
        printf("Menu Inicial\n");
        printf("1.Comparativo Populacao\n");
        printf("2.Comparativo Area\n");
        printf("3.Comparativo Pontos Turisticos\n");
        printf("4.Sair\n");
        printf("Escolha Uma das opcões acima:\n");
        scanf("%d", &opcao);
 
        //Estrutura Switch//
        switch (opcao)
        {
        case 1:
            if (Populacao1 >= Populacao2)
            {
              printf("Populacao1 Venceu!!!\n");
           
            } else
            {
                printf("Populacao2 Venceu!!!\n");
            
            } elseif (Populacao1 == Populacao2);
            {
                printf("Empate!!!");
            } 
                break;
            
            case 2: 
            if (Area1 >= Area2)
            {
              printf("Area1 Venceu!!!\n");
           
            } else
            {
                printf("Area2 Venceu!!!\n");
            
            } elseif (Area1 == Area2);
            {
                printf("Empate!!!");
            } 
                break;
            
            case 3:
            if (Turismo1 >= Turismo2)
            {
              printf("Pontos Turiscos1 Venceu!!!\n");
           
            } else
            {
                printf("Pontos turiscos2 Venceu!!!\n");
            
            } elseif (Turismo1 == Turismo2);
            {
                printf("Empate!!!");
            } 
                break;

            case 4: 
                printf("Saindo...");
            default:
        printf("Opcao Invalida Tente Novamente");
            break;
        }
   
         
        
        return 0;


        //Terceiro Desafio Mestre Comparacao de atributos//

        int resultado1,resultado2;
        char Atributo1,Atributo2;
        char País1,País2;
        int Ataque1,Ataque2,Defesa1,Defesa2;

        //Gerador Numeros Aleatorios//
        srand(time(0));
        Ataque1 = 2;
        Ataque2 = 1;
        Defesa1 = 1;
        Defesa2 = 2;
        
        printf("Digite o nome do País:\n");
        scanf("%s",&País1);

        //Inicio Jogo//
        printf("Iniciando Bem vindo De volta Jogador:\n");
        printf("Escolha o primeiro Atributo:\n");
        printf("A. Ataque\n");
        printf("D. Defesa\n");
        
        printf("Escolha a Comparacao ");
        scanf("%c",&Atributo1);

        switch (Atributo1)
        {
        case 'A':
        case 'a':
            printf("Voce Escolheu a Opcao ataque!\n");
            resultado1 = Ataque1 > Ataque2 ? 1 : 0;
            break;
            case 'D':
            case 'd':
                printf("Voce Escolheu a Opcao Defesa!\n");
                resultado1 = Defesa1 > Defesa2 ? 1 : 0;
                break;
                   
        
        default:
        printf("Opcao Invalida Tente Novamente!");
            break;
            
            //Sgeundo Atributo


            printf("Atenção!! Não selecione Atributos Repetidos!!");
            printf("Escolha o Segundo Atributo:\n");
            printf("A. Ataque\n");
            printf("D. Defesa\n");
            
            printf("Escolha a Comparacao ");
            scanf("%c",&Atributo2);
            
            if (Atributo1 == Atributo2)
            {
                printf("Voce Escolheu Mesmo Atributo!!");;

            } else{
            
            
    
            switch (Atributo2)
            {
            case 'A':
            case 'a':
                printf("Voce Escolheu a Opcao ataque!\n");
                resultado1 = Ataque1 > Ataque2 ? 1 : 0;
                break;
                case 'D':
                case 'd':
                    printf("Voce Escolheu a Opcao Defesa!\n");
                    resultado1 = Defesa1 > Defesa2 ? 1 : 0;
                    break;
                       
            
            default:
            printf("Opcao Invalida Tente Novamente!");
                break;

                if (resultado1 && resultado2)
                {
                    printf("Parabens Voce Venceu!!\n");
                } else if (resultado1 != resultado2)
                {
                   printf("Empate!!\n");
                } else
                {
                    printf("Infelizmente NÃO Deu Voce Perdeu!!\n");
                }
                

                
                
    

        }

    }  

//Terceiro Desafio Mestre

 }

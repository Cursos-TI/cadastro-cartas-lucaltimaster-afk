#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    //Declaração das variaveis.
    char estado[2], cod[5], cidade[50];
    int populacao, Pturi, x = 0;
    float area, Dpop, PIBpc;
    double pib, super, semiSp;

    char estado2[2], cod2[5], cidade2[50];
    int populacao2, Pturi2, y = 0;
    float area2, Dpop2, PIBpc2;
    double pib2, super2, semiSp2;

    //Coleta de dados inseridos pelo usuário.
    printf("Carta 1:\n");
    printf("Insira um estado de A a H: ");
    scanf(" %s", estado);

    //Converte letras minúsculas para maiúsculas.
    estado[0] = toupper(estado[0]);

    //Verifica se é uma letra permitida.
    if (estado[0] >= 'A' && estado[0] <= 'H')
    {

    }
    else 
    {
        printf("Inválido\n");
        return 0;
    }
    
    //Consome o \n deixado pelo scanf
    getchar();

    printf("Insira a cidade: ");
    fgets(cidade, 50, stdin);

    printf("Insira o codigo (Estado + número de 01 a 04): ");
    scanf("%s", cod);

    //Converte letras minúsculas para maiúsculas.
    cod[0] = toupper(cod[0]);

    //Compara se a primeira letra do cod é igual ao estado.
    if (cod[0] != estado[0])
    {
        printf("Inválido");
        return 0;
    }
    
    //Coleta dados inseridos pelo usuário.
    printf("Insira a população: ");
    scanf("%d", &populacao);

    printf("Insira a Área: ");
    scanf("%f", &area);

    printf("Insira o PIB: ");
    scanf("%lf", &pib);

    printf("Insira a quantidade de pontos turisticos: ");
    scanf("%d", &Pturi);

    printf("\n");

    (Dpop = populacao/area);
    (PIBpc = pib/populacao);
    (semiSp = populacao + area + (pib/1000) + Pturi);
    (super = semiSp + Dpop + PIBpc);

    //impressão dos dados inseridos pelo usuário.
    printf("Estado: %s\n", estado);
    printf("Cidade: %s", cidade);
    printf("Codigo carta: %s\n", cod);
    printf("População: %d\n", populacao);
    printf("Área: %.2fkm²\n", area);
    printf("PIB: R$%.2f\n", pib);
    printf("Pontos turísticos: %d\n", Pturi);
    printf("Densidade populacional: %.2f hab/km²\n", Dpop);
    printf("PIB per capita: %.2f Reais\n", PIBpc);
    printf("Super: %.2f\n", super);

    printf("\n");

        //Coleta de dados inseridos pelo usuário.
    printf("Carta 2:\n");
    printf("Insira um estado de A a H: ");
    scanf(" %s", estado2);

     estado2[0] = toupper(estado2[0]);

        if (estado2[0] >= 'A' && estado2[0] <= 'H')
    {

    } else {
        printf("Inválido\n");
        return 0;
    }


    //Consome o \n deixado pelo scanf
    getchar();

    printf("Insira a cidade: ");
    fgets(cidade2, 50, stdin);

    printf("Insira o codigo (Estado + número de 01 a 04): ");
    scanf("%s", cod2);

        //Converte letras minúsculas para maiúsculas.
    cod2[0] = toupper(cod2[0]);

    //Compara se a primeira letra do cod é igual ao estado.
    if (cod2[0] != estado2[0])
    {
        printf("Inválido");
        return 0;
    }

    if (strcmp(cod2,cod) == 0)
    {
        printf("Carta repetida. INVÁlIDO!");
        return 0;
    }

    printf("Insira a população: ");
    scanf("%d", &populacao2);

    printf("Insira a Área: ");
    scanf("%f", &area2);

    printf("Insira o PIB: ");
    scanf("%lf", &pib2);

    printf("Insira a quantidade de pontos turisticos: ");
    scanf("%d", &Pturi2);

    printf("\n");

    (Dpop2 = populacao2/area2);
    (PIBpc2 = pib2/populacao2);
    (semiSp2 = populacao2 + area2 + (pib2/1000) + Pturi2);
    (super2 = semiSp2 + Dpop2 + PIBpc2);

    //impressão dos dados inseridos pelo usuário.
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s", cidade2);
    printf("Codigo carta: %s\n", cod2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f de reais\n", pib2);
    printf("Pontos turísticos: %d\n", Pturi2);
    printf("Densidade populacional: %.2f hab/km²\n", Dpop2);
    printf("PIB per capita: %.2f reais\n", PIBpc2);
    printf("Super: %.2f\n", super2);

    printf("\n");

    printf("Comparação de cartas:\n");
    printf("População: ");

    if (populacao > populacao2)
    {
        printf("Carta 1 venceu (1)\n");
        x++;
    }
    else
    {
        printf("Carta 2 venceu (0)\n");
        y++;
    }

    printf("Àrea: ");

    if (area > area2)
    {
        printf("Carta 1 venceu (1)\n");
        x++;
    }
    else
    {
        printf("Carta 2 venceu (0)\n");
        y++;
    }

        printf("PIB: ");

    if (pib > pib2)
    {
        printf("Carta 1 venceu (1)\n");
        x++;
    }
    else
    {
        printf("Carta 2 venceu (0)\n");
        y++;
    }

        printf("Pontos turísticos: ");

    if (Pturi > Pturi2)
    {
        printf("Carta 1 venceu (1)\n");
        x++;
    }
    else
    {
        printf("Carta 2 venceu (0)\n");
        y++;
    }

        printf("Densidade populacional: ");

    if (Dpop < Dpop2)
    {
        printf("Carta 1 venceu (1)\n");
        x++;
    }
    else
    {
        printf("Carta 2 venceu (0)\n");
        y++;
    }
    
        printf("PIB per capita: ");

    if (PIBpc > PIBpc2)
    {
        printf("Carta 1 venceu (1)\n");
        x++;
    }
    else
    {
        printf("Carta 2 venceu (0)\n");
        y++;
    }

        printf("Super: ");

    if (super > super2)
    {
        printf("Carta 1 venceu (1)\n");
        x++;
    }
    else
    {
        printf("Carta 2 venceu (0)\n");
        y++;
    }

    printf("\n");

    if (x > y)
    {
        printf("Carta 1 venceu!");
    }
    else
    {
        printf("Carta 2 venceu!");
    }
    
  

    return 0;
}

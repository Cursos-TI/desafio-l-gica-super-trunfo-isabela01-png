
#include <stdio.h>

int main (){

    printf ("Desfio cartas trunfo \n");

    \\estrutura para montar os dados da carta//
    struct carta {
        char estado [4];
        char codigo [3];
        char cidade [30];
        int populacao;
        float area;
        float Pib;
        int turismo;
        float densidade1 , densidade2 ;
        float percapita1 , percapita2 ;
};

struct carta carta1 , carta2 ;


\\entrada dos dados da primeira carta//

printf ("Insira os dados da primeira carta :\n");

printf ("Estado (A-H): ");
scanf ("%s", carta1. estado);

printf ("Código da carta (ex: A01) : ");
scanf ("%s", carta1.codigo) ;

printf ("Nome da cidade : ");
scanf ("%s", carta1.cidade);

printf ("População : ");
scanf("%d", &carta1.populacao);

printf ("Area (em Km²): ");
scanf ("%f", &carta1.area);

printf ("Pib :");
scanf ("%f", &carta1.Pib);

printf ("Número de pontos turísticos :");
scanf ("%d", &carta1.turismo);

\\entrada dos dados da segunda carta//

printf ("Insira os dados da segunda carta : \n");
printf ("Estado (A-H) : ");
scanf ("%s", carta2.estado);

printf ("Código da carta (ex: A02): ");
scanf ("%s", carta2.codigo);

printf ("Nome da cidade : ");
scanf("%s", carta2.cidade);

printf ("População :");
scanf ("%d", &carta2.populacao);

printf ("Area (em Km²): ");
scanf ("%f", &carta2.area);

printf ("Pib :");
scanf ("%f", &carta2.Pib);

printf("Número de pontos turísticos :");
scanf("%d", &carta2.turismo);


\\Cálculos densidade e Pib per capita//
densidade1 = carta1.populacao / carta1.area ;
percapita1 = carta1.Pib / carta1.populacao ;
densidade2 = carta2.populacao / carta2.area ;
percapita2 = carta2.Pib / carta2.populacao ;


\\Exibindo os dados das cartas//

printf ("\nDados da primeira carta : \n");

printf ("Estado : %s\n", carta1.estado);
printf("Código da carta : %s\n", carta1.codigo);
printf ("Nome da cidade : %s\n", carta1.cidade);
printf("População: %d\n", carta1.populacao);
printf("Area (em Km²): %.2f\n", carta1.area);
printf ("Pib : %.2f\n", carta1.Pib);
printf("Número de pontos turísticos :%d\n", carta1.turismo);
printf ("Densidade Populacional : %.2f hab/km²\n",carta1.densidade1) ;
printf("PIB per capita : reais %.2f\n", carta1.percapita1) ;


\\Divisão entre carta1 e carta2//

printf ("\nDados da segunda carta :\n");

printf ("Estado : %s\n", carta2.estado);
printf ("Código da carta : %s\n", carta2.codigo);
printf("Nome da cidade : %s\n", carta2.cidade);
printf("População : %d\n", carta2.populacao);
printf("Area (em Km²): %.2f\n",carta2.area);
printf("Pib : %.2f\n", carta2.Pib);
printf ("Número de pontos turísticos : %d\n", carta2.turismo);
printf ("Densidade Populacional: %.2f hab/km²\n", carta2.densidade2) ;
printf ("PIB per capita : reais %.2f\n", carta2.percapita2) ;

\\ Comparação da população das cartas//
int carta1.populacao = 12325000 ;
int carta2.populacao =6748000 ;

if (carta1.populacao > carta2.populacao){
    printf ("Cidade 1 tem maior população !\n");
} else {
    printf ("Cidade 2 tem maior população !\n") ;
}


return 0;


}
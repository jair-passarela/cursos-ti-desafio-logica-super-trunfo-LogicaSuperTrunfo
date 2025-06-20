#include <stdio.h>

int main(){
    // carta 1 
    char estado1;
    char codigo1[4];
    char cidade1[100];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int turismo1;
    float densidade1;
    float pibcap1;
   long double superpoder1; 

    // carta 2
    char estado2;
    char codigo2[4];
    char cidade2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int turismo2;
    float densidade2;
    float pibcap2;
    long double superpoder2;

    //variaveis para escolha e para a batalha
    int escolha1, escolha2, ponto1 = 0,ponto2 = 0;
    float valor1a=0, valor1b=0, valor2a=0,valor2b=0;


    //dados da carta 1 
    printf("\nCadastro da carta 1:\n ");// a partir daqui exibiremos o cadastro da primeira carta

    printf("Digite o estado da carta 1: ");// pedimos o estado da carta
    scanf(" %c",&estado1);
     

    printf("Digite o codigo da carta 1: ");// pedimos o codigo da carta
    scanf(" %s",codigo1);
     

    printf("digite o nome da cidade 1: ");// pedimos o nome da carta
    scanf( " %[^\n]",cidade1);

    printf("Digite a populacao da cidade 1: ");// pedimos a população da carta
    scanf("%lu",&populacao1);

    printf("Digite o tamanho da area da cidade 1: ");// pedimos o tamanho da area da carta
    scanf("%f",&area1);

    printf("Digite o numero do pib da cidade 1: ");// pedimos o pib da carta 
    scanf("%f",&pib1);

    printf("digite o numero de pontos turisticos da cidade 1: ");// pedimos o pontos turisticos da carta
    scanf("%d",&turismo1);

    pib1 = pib1 * 1e9; // aqui multiplicamos o pib
    densidade1 = ((float)populacao1 / area1);//aqui atribuimos a densidade da primeira carta dividindo a populacao pela area (passamos a populaçao pra float)
    pibcap1 = (pib1 / (float)populacao1);// atrubuimos o pib per cap dividindo o pib pela populacao (passamos a populacao para float)
    superpoder1 = ((float)populacao1 + area1 + pib1 + turismo1 + pibcap1 + (1 / densidade1));// atruibuimos o superpoder para a carta somando todos os dados 

    // dados da carta 2

    printf("Cadastro da carta 2:\n"); // aqui comecamos os dados da segunda carta
    printf("digite o estado da carta 2:\n");
    scanf(" %c",&estado2);
     
    printf("Digite o codigo da carta 2: "); //pedimos o codigo
    scanf(" %s",codigo2);
     

    printf("digite o nome da cidade 2: "); //pedimos o nome 
    scanf( " %[^\n]", cidade2);

    printf("Digite a populacao da cidade 2: ");//  pedimos a populacao
    scanf("%lu",&populacao2);
     

    printf("Digite o tamanho da area da cidade 2: ");// pedimos o tamanho da area
    scanf("%f",&area2);
     

    printf("Digite o numero do pib da cidade 2: "); //pedimos o pib
    scanf("%f",&pib2);

    printf("digite o numero de pontos turisticos da cidade 2: "); //pedimos o numeros de pontos turisticos
    scanf("%d",&turismo2);

    pib2 = pib2 * 1e9; // aqui multiplicamos o pib
    densidade2 = ((float)populacao2 / area2);// aqui atruibuimos a densidade da carta 2
    pibcap2 = (pib2 / (float)populacao2);// aqui atribuimos o pib per cap 

    superpoder2 = (float)populacao2 + area2 + pib2 + turismo2 + pibcap2 + (1 / densidade2);// aqui atrubuimos o super poder da carta 2 somando todos os dados

    //  Exibição das cartas
    // Exibição da carta 1
    printf("\nCarta1:\n"); // a partir daqui exibiremos todos os dados q pedimos da primeira carta
    
    printf("Estado: %c\n",estado1);
    printf("Codigo: %s\n",codigo1);
    printf("Cidade: %s\n",cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2fkm2\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Pontos turisticos: %d\n", turismo1);
    printf("densidade populacional: %.2f hab/km2\n", densidade1);
    printf("pib per capita: %.2f reais\n", pibcap1);

    // Exibição da carta 2 
    printf("\nCarta2:\n");// a partidar daqui exibiremos todos os dados q pedimos da segunda carta
    
    printf("Estado: %c\n",estado2);
    printf("Codigo: %s\n",codigo2);
    printf("Cidade: %s\n",cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2fkm2\n", area2);
    printf("PIB: %.2f  reais\n", pib2);
    printf("Pontos turisticos: %d\n", turismo2);
    printf("densidade populacional: %.2f hab/km2\n", densidade2);
    printf("pib per capita: %.2f reais\n", pibcap2);

    // Mostra os atributos com numeração
printf("\nAtributos disponíveis para comparação:\n");
printf("1 - Populaçao\n");
printf("2 - area\n");
printf("3 - PIB\n");
printf("4 - Pontos turrsticos\n");
printf("5 - Densidade populacional\n");
printf("6 - PIB per capita\n");
printf("7 - Superpoder\n");


    printf("\nescolha os atributos da carta\n");// aqui começamos a batalha!

    printf("escolha o primeiro atribuito\n");
    scanf("%d",&escolha1);
    printf("escolha o segundo atributo\n");
    scanf("%d",&escolha2);
    if (escolha1 == escolha2)
    {
        printf("voce escolheu dois atributos iguals,programa encerrado\n");
        return 1;
    }

    switch (escolha1)
    {
    case 1:
        valor1a = populacao1; valor2a = populacao2;
        break;
    case 2:
    valor1a = area1; valor2a = area2;
    break;
    case 3:
    valor1a = pib1; valor2a = pib2;
    break;
    case 4:
    valor1a = turismo1; valor2a = turismo2;
    break;
    case 5:
    valor1a = densidade1; valor2a = densidade2;
    break;
    case 6:
    valor1a = pibcap1; valor2a = pibcap2;
    break;
    case 7:
    valor1a = superpoder1; valor2a = superpoder2;
    break;
    
    default: printf("atributo invalido.\n");
    return 1;
    }

      switch (escolha2)
    {
    case 1:
        valor1b = populacao1; valor2b = populacao2;
        break;
    case 2:
    valor1b = area1; valor2b = area2;
    break;
    case 3:
    valor1b = pib1; valor2b = pib2;
    break;
    case 4:
    valor1b = turismo1; valor2b = turismo2;
    break;
    case 5:
    valor1b = densidade1; valor2b = densidade2;
    break;
    case 6:
    valor1b = pibcap1; valor2b = pibcap2;
    break;
    case 7:
    valor1b = superpoder1; valor2b = superpoder2;
    break;
    
    default: printf("atributo invalido.\n");
    return 1;
    }
    // comparacão de atributos

 if ((escolha1 == 5 && valor1a < valor2a) || (escolha1 != 5 && valor1a > valor2a))
 {
    ponto1++ ;  
 }else if (valor1a != valor2a)
 {
    ponto2++;
 }
 
 
 if ((escolha2 == 5 && valor1b < valor2b) || (escolha2 != 5 && valor1b > valor2b))
 {
    ponto1++ ;  
 }else if (valor1b != valor2b)
 {
    ponto2++;
 }
                            // soma dos dois atrubitos de cada carta
float soma1 = valor1a + valor1b;
float soma2 = valor2a + valor2b;
                            // exibibição dos resultados
printf("%s: %.2f + %.2f = %.2f\n", cidade1,valor1a,valor1b,soma1);
printf("%s: %.2f + %.2f = %.2f\n", cidade2,valor2a,valor2b,soma2);

if (ponto1 > ponto2)
{
   printf("cidade vencedora: %s\n",cidade1);
}else if (ponto2 > ponto1)
{
    printf("cidade vencedora: %s\n",cidade2);
}else if (soma1 > soma2)
{
    printf("Vencedor pela soma foi: %s\n", cidade1);
}else if (soma2 > soma1)
{
    printf("vencedor pela soma foi : %s\n", cidade2);
}
else{
    printf("~~~~~Empate~~~~\n");
}

    
    return 0;
}
#include <stdio.h>

int main(){
//====CRIANDO PRIMEIRA CARTA====
//Variaveis
    char carta1_estado;
    char carta1_codigo[20], carta1_nome_cidade[50];
    int carta1_pontos_turisticos;
    float carta1_area, carta1_pib, carta1_densidade, carta1_pib_media, carta1_super;
    unsigned long int carta1_populacao;

//Pedindo letra mas sem nenhuma verificação
    printf("Digite uma letra A a H: \n");
    scanf(" %c", &carta1_estado);
    sprintf(carta1_codigo, "%c01", carta1_estado);
//Nome da cidade
    printf("Digite o nome da cidade: \n");//Nome da cidade
    scanf(" %[^\n]", carta1_nome_cidade);

//População
    printf("Digite a população: \n");
    scanf("%lu", &carta1_populacao);

//Área
    printf("Digite a área: \n");
    scanf("%f", &carta1_area);

//Valor do pib
    printf("Digite o valor do PIB: \n");
    scanf("%f", &carta1_pib);

//Pontos turisticos
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &carta1_pontos_turisticos);
    
    carta1_densidade = carta1_populacao / carta1_area;
    carta1_pib_media =  carta1_pib / carta1_populacao;

    carta1_super = carta1_area + carta1_pib + carta1_pib_media + carta1_pontos_turisticos + carta1_populacao + (1.0f / carta1_densidade);

///======================================================================================================

//====CRIANDO SEGUNDA CARTA====
//Variaveis
    char carta2_estado;
    char carta2_codigo[20], carta2_nome_cidade[50];
    int carta2_pontos_turisticos;
    float carta2_area, carta2_pib, carta2_densidade, carta2_pib_media, carta2_super;
    unsigned long int carta2_populacao;


//Pedindo letra mas sem nenhuma verificação
    printf("Digite uma letra A a H: \n");
    scanf(" %c", &carta2_estado);
    sprintf(carta2_codigo, "%c02", carta2_estado);
//Nome da cidade
    printf("Digite o nome da cidade: \n");//Nome da cidade
    scanf(" %[^\n]", carta2_nome_cidade);

//População
    printf("Digite a população: \n");
    scanf("%lu", &carta2_populacao);

//Área
    printf("Digite a área: \n");
    scanf("%f", &carta2_area);

//Valor do pib
    printf("Digite o valor do PIB: \n");
    scanf("%f", &carta2_pib);

//Pontos turisticos
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &carta2_pontos_turisticos);
    
    carta2_densidade = carta2_populacao / carta2_area;
    carta2_pib_media =  carta2_pib / carta2_populacao;

    carta2_super = carta2_area + carta2_pib + carta2_pib_media + carta2_pontos_turisticos + carta2_populacao + (1.0f / carta2_densidade);

///======================================================================================================    

//Exibir os valores inseridos pelo usuario

    printf("------------- Carta 01 -------------\n");
    printf("Estado: %c\n", carta1_estado);
    printf("Codigo Carta: %s\n", carta1_codigo);
    printf("Nome da Cidade: %s\n", carta1_nome_cidade);
    printf("População: %lu\n", carta1_populacao);
    printf("Área: %.2fkm²\n", carta1_area);
    printf("PIB: %.2f bilhões de reais\n", carta1_pib);
    printf("PIB per Capita: R$%.2f reais\n", carta1_pib_media);
    printf("Quantidades de pontos turisticos: %d\n", carta1_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1_densidade);
    printf("VALOR SUPER CARTA: %f\n", carta1_super);
    printf("------------- FIM  -------------\n");
    
    printf("------------- Carta 02 -------------\n");
    printf("Estado: %c\n", carta2_estado);
    printf("Codigo Carta: %s\n", carta2_codigo);
    printf("Nome da Cidade: %s\n", carta2_nome_cidade);
    printf("População: %lu\n", carta2_populacao);
    printf("Área: %.2fkm²\n", carta2_area);
    printf("PIB: %.2f bilhões de reais\n", carta2_pib);
    printf("PIB per Capita: R$%.2f reais\n", carta2_pib_media);
    printf("Quantidades de pontos turisticos: %d\n", carta2_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2_densidade);
    printf("VALOR SUPER CARTA: %f\n", carta2_super);
    printf("------------- FIM  -------------\n");


//Comparando cartas
//População
    if (carta1_populacao > carta2_populacao){
        printf("População: Carta 1 Venceu!\n");
    } else if (carta2_populacao > carta1_populacao){
        printf("População: Carta 2 Venceu!\n");
    } else {
        printf("População: Empate!\n");
    }
//Área
    if (carta1_area > carta2_area){
        printf("Área: Carta 1 Venceu!\n");
    } else if (carta2_area > carta1_area){
        printf("Área: Carta 2 Venceu!\n");
    } else {
        printf("Área: Empate!\n");
    }

//PIB
    if (carta1_pib > carta2_pib){
        printf("PIB: Carta 1 Venceu!\n");
    } else if (carta2_pib > carta1_pib){
        printf("PIB: Carta 2 Venceu!\n");
    } else {
        printf("PIB: Empate!\n");
    }
    
//Pontos Turisticos
    if (carta1_pontos_turisticos > carta2_pontos_turisticos){
        printf("Quantidade pontos turisticos: Carta 1 Venceu!\n");
    } else if (carta2_pontos_turisticos > carta1_pontos_turisticos){
        printf("Quantidade pontos turisticos: Carta 2 Venceu!\n");
    } else {
        printf("Quantidade pontos turisticos: Empate!\n");
    }
 
//Densidade Populacional
    if (carta1_densidade < carta2_densidade){
        printf("Densidade Populacional: Carta 1 Venceu!\n");
    } else if (carta2_densidade < carta1_densidade){
        printf("Densidade Populacional: Carta 2 Venceu!\n");
    } else {
        printf("Densidade Populacional: Empate!\n");
    }
    
//PIB per Capita
    if (carta1_pib_media > carta2_pib_media){
        printf("PIB per Capita: Carta 1 Venceu!\n");
    } else if (carta2_pib_media > carta1_pib_media){
        printf("PIB per Capita: Carta 2 Venceu!\n");
    } else {
        printf("PIB per Capita: Empate!\n");
    }
    
//Super Poder
    if (carta1_super > carta2_super){
        printf("Super Poder: Carta 1 Venceu!\n");
    } else if (carta2_super > carta1_super){
        printf("Super Poder: Carta 2 Venceu!\n");
    } else {
        printf("Super Poder: Empate!\n");
    }



}

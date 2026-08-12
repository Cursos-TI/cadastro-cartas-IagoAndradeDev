#include <stdio.h>

int main(){
    //Variaveis de todos meus objetos
    printf("------ Cadastrando Carta -------\n");
    char estado;
    char codigo_carta[20], nome_cidade[20];
    int populaçao, pontos_turisticos;
    float area, pib;

    //Pedindo letra mas sem nenhuma verificação
    printf("Digite uma letra A a H: \n");
    scanf("%c", &estado);

    //Criando o codigo da carta e exibindo ele
    sprintf(codigo_carta, "%c01", estado);
    printf("O codigo da carta é: %s\n", codigo_carta);

    //Nome da cidade
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade);

    //População
    printf("Digite a população: \n");
    scanf("%d", &populaçao);

    //Área
    printf("Digite a área: \n");
    scanf("%f", &area);

    //Valor do pib
    printf("Digite o valor do PIB: \n");
    scanf("%f", &pib);

    //Pontos turisticos
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

    //Exibir os valores inseridos pelo usuario
    printf("------------- Carta 01 -------------\n");
    printf("Codigo Carta: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f", codigo_carta, nome_cidade, populaçao, area);
    printf("\nPIB: %.2f\nQuantidades de pontos turisticos: %d", pib, pontos_turisticos);

}
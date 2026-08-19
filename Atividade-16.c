#include <stdio.h>


int main(){
//====CRIANDO PRIMEIRA CARTA====
//Variaveis
    char carta1_estado;
    char carta1_codigo[20], carta1_nome_cidade[50];
    int carta1_pontos_turisticos, escolha1_usuario, vencedor_atributo1;
    float carta1_area, carta1_pib, carta1_densidade, carta1_pib_media, carta1_super, valor1_carta1, valor1_carta2, carta1_soma;
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
    int carta2_pontos_turisticos, escolha2_usuario, vencedor_atributo2;
    float carta2_area, carta2_pib, carta2_densidade, carta2_pib_media, carta2_super, valor2_carta1, valor2_carta2, carta2_soma;
    unsigned long int carta2_populacao;


//Pedindo letra mas sem nenhuma verificação
    printf("_______________________________\n");
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
    printf("VALOR SUPER CARTA: %.2f\n", carta1_super);
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
    printf("VALOR SUPER CARTA: %.2f\n", carta2_super);
    printf("------------- FIM  -------------\n");


//Iniciando escolha dos atributos

    printf("________PRIMEIRA ESCOLHA________\n");
    printf("[1]População\n[2]Área\n[3]PIB\n[4]Ponto turisticos\n[5]Densidade Populacional\n");
    printf("[6]Pib Per Capta\n[7]Super Poder\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &escolha1_usuario);
    printf("______________________________\n");
    
//Pegando valores da primeira escolha
    switch (escolha1_usuario){
        case 1:
            //População selecionado, guardando valores
            valor1_carta1 = carta1_populacao;
            valor1_carta2 = carta2_populacao;
            break;
            case 2:
            //Area selecionado, guardando valores
            valor1_carta1 = carta1_area;
            valor1_carta2 = carta2_area;
            break;
        case 3:
            //PIB selecionado, guardando valores
            valor1_carta1 = carta1_pib;
            valor1_carta2 = carta2_pib;
            break;
        case 4:
            //Pontos turisticos selecionado, guardando valores
            valor1_carta1 = carta1_pontos_turisticos;
            valor1_carta2 = carta2_pontos_turisticos;
            break;
        case 5:
            //Densidade selecionado, guardando valores
            valor1_carta1 = carta1_densidade;
            valor1_carta2 = carta2_densidade;
            break;
        case 6:
            //Pib media selecionado, guardando valores
            valor1_carta1 = carta1_pib_media;
            valor1_carta2 = carta2_pib_media;
            break;
        case 7:
            //Super carta selecionado, guardando valores
            valor1_carta1 = carta1_super;
            valor1_carta2 = carta2_super;
            break;
        default:
            printf("Opção invalida! Tente novamente!");
            break;
    }

//Tratando a segunda escolha. Evitando duas escolhas iguais
    switch (escolha1_usuario){
    case 1:
        //População ja foi selecionada na primeira opção
        printf("________SEGUNDA ESCOLHA________\n");
        printf("[2]Área\n[3]PIB\n[4]Ponto turisticos\n[5]Densidade Populacional\n");
        printf("[6]Pib Per Capta\n[7]Super Poder\n");
        printf("Escolha uma opção:\n");
        scanf("%d", &escolha2_usuario);
        printf("______________________________\n");
        break;
    case 2:
        //Area ja foi selecionada na primeira opção
        printf("________SEGUNDA ESCOLHA________\n");
        printf("[1]População\n[3]PIB\n[4]Ponto turisticos\n[5]Densidade Populacional\n");
        printf("[6]Pib Per Capta\n[7]Super Poder\n");
        printf("Escolha uma opção:\n");
        scanf("%d", &escolha2_usuario);
        printf("______________________________\n");
        break;
    case 3:
        //PIB ja foi selecionada na primeira opção
        printf("________SEGUNDA ESCOLHA________\n");
        printf("[1]População\n[2]Área\n[4]Ponto turisticos\n[5]Densidade Populacional\n");
        printf("[6]Pib Per Capta\n[7]Super Poder\n");
        printf("Escolha uma opção:\n");
        scanf("%d", &escolha2_usuario);
        printf("______________________________\n");
        break;
    case 4:
        //Ponto turistico ja foi selecionada na primeira opção
        printf("________SEGUNDA ESCOLHA________\n");
        printf("[1]População\n[2]Área\n[3]PIB\n[5]Densidade Populacional\n");
        printf("[6]Pib Per Capta\n[7]Super Poder\n");
        printf("Escolha uma opção:\n");
        scanf("%d", &escolha2_usuario);
        printf("______________________________\n");
        break;
    case 5:
        //Densidade Populacional ja foi selecionada na primeira opção
        printf("________SEGUNDA ESCOLHA________\n");
        printf("[1]População\n[2]Área\n[3]PIB\n[4]Ponto turisticos\n");
        printf("[6]Pib Per Capta\n[7]Super Poder\n");
        printf("Escolha uma opção:\n");
        scanf("%d", &escolha2_usuario);
        printf("______________________________\n");
        break;
    case 6:
        //PIB per capta ja foi selecionada na primeira opção
        printf("________SEGUNDA ESCOLHA________\n");
        printf("[1]População\n[2]Área\n[3]PIB\n[4]Ponto turisticos\n[5]Densidade Populacional\n");
        printf("[7]Super Poder\n");
        printf("Escolha uma opção:\n");
        scanf("%d", &escolha2_usuario);
        printf("______________________________\n");
        break; 
    case 7:
        //Super carta ja foi selecionada na primeira opção
        printf("________SEGUNDA ESCOLHA________\n");
        printf("[1]População\n[2]Área\n[3]PIB\n[4]Ponto turisticos\n[5]Densidade Populacional\n");
        printf("[6]Pib Per Capta\n");
        printf("Escolha uma opção:\n");
        scanf("%d", &escolha2_usuario);
        printf("______________________________\n");
        break; 
    default:
        printf("Opção invalida! Tente novamente!");
        break;
    }

//Salvando valores da segunda escolha    
    switch (escolha2_usuario){
        case 1:
            //População selecionado, guardando valores
            valor2_carta1 = carta1_populacao;
            valor2_carta2 = carta2_populacao;
            break;
        case 2:
            //Are selecionado, guardando valores
            valor2_carta1 = carta1_area;
            valor2_carta2 = carta2_area;
            break;
        case 3:
            //PIB selecionado, guardando valores
            valor2_carta1 = carta1_pib;
            valor2_carta2 = carta2_pib;
            break;
        case 4:
            //Ponto Turisticos selecionado, guardando valores
            valor2_carta1 = carta1_pontos_turisticos;
            valor2_carta2 = carta2_pontos_turisticos;
            break;
        case 5:
            //Deensidade, guardando valores
            valor2_carta1 = carta1_densidade;
            valor2_carta2 = carta2_densidade;
            break;
        case 6:
            //Pib media selecionado, guardando valores
            valor2_carta1 = carta1_pib_media;
            valor2_carta2 = carta2_pib_media;
            break;
        case 7:
            //Super carta selecionado, guardando valores
            valor2_carta1 = carta1_super;
            valor2_carta2 = carta2_super;
            break;
        default:
            printf("Opção invalida! Tente novamente!");
            break;
    }

//Varificando atributos vencedores, verificando e tornando a menor densidade a vencedora
    if (escolha1_usuario == 5){
        vencedor_atributo1 = (valor1_carta1 < valor1_carta2) ? 1 : 
                             (valor1_carta2 < valor1_carta1) ? 2 : 0;
    } else {
        vencedor_atributo1 = (valor1_carta1 > valor1_carta2) ? 1 :
                             (valor1_carta2 > valor1_carta1) ? 2 : 0;
    }

    if (escolha2_usuario == 5){
        vencedor_atributo2 = (valor2_carta1 < valor2_carta2) ? 1 : 
                             (valor2_carta2 < valor2_carta1) ? 2 : 0;
    } else {
        vencedor_atributo2 = (valor2_carta1 > valor2_carta2) ? 1 :  
                             (valor2_carta2 > valor2_carta1) ? 2 : 0;
    }


//Somando o valor dos dois atributos selecionados
    carta1_soma = valor1_carta1 + valor2_carta1;
    carta2_soma = valor1_carta2 + valor2_carta2;


//Gerando resultado final do programa
    printf("\n========================================\n");
    printf("           RESULTADO DA COMPARAÇÃO\n");
    printf("========================================\n");

    printf("Carta 1: %s\n", carta1_nome_cidade);
    printf("Carta 2: %s\n", carta2_nome_cidade);

//Mostrando o nome da opção selecionado pelo usuario
    printf("\n--- Primeiro atributo ---\n");
    switch (escolha1_usuario) {
        case 1:
            printf("Atributo: População\n");
            break;
        case 2:
            printf("Atributo: Área\n");
            break;
        case 3:
            printf("Atributo: PIB\n");
            break;
        case 4:
            printf("Atributo: Pontos turísticos\n");
            break;
        case 5:
            printf("Atributo: Densidade Populacional\n");
            break;
        case 6:
            printf("Atributo: PIB per capita\n");
            break;
        case 7:
            printf("Atributo: Super Poder\n");
            break;
        default:
            printf("Atributo inválido\n");
    }

//Monstrando os valores da opção selecionada
    printf("Valor da Carta 1: %.2f\n", valor1_carta1);
    printf("Valor da Carta 2: %.2f\n", valor1_carta2);

//Verificando o vencedor do atribudo selecionado
    if (vencedor_atributo1 == 1) {
        printf("Vencedor do atributo: Carta 1\n");
    } else if (vencedor_atributo1 == 2) {
        printf("Vencedor do atributo: Carta 2\n");
    } else {
        printf("Resultado do atributo: Empate\n");
    }

//Mostrando o nome da segunda opção selecionada
    printf("\n--- Segundo atributo ---\n");
    switch (escolha2_usuario) {
        case 1:
            printf("Atributo: População\n");
            break;
        case 2:
            printf("Atributo: Área\n");
            break;
        case 3:
            printf("Atributo: PIB\n");
            break;
        case 4:
            printf("Atributo: Pontos turísticos\n");
            break;
        case 5:
            printf("Atributo: Densidade Populacional\n");
            break;
        case 6:
            printf("Atributo: PIB per capita\n");
            break;
        case 7:
            printf("Atributo: Super Poder\n");
            break;
        default:
            printf("Atributo inválido\n");
    }
//Mostrando o valor do atributo selecionado
    printf("Valor da Carta 1: %.2f\n", valor2_carta1);
    printf("Valor da Carta 2: %.2f\n", valor2_carta2);

//Verificando o valor do atributo selecionado
    if (vencedor_atributo2 == 1) {
        printf("Vencedor do atributo: Carta 1\n");
    } else if (vencedor_atributo2 == 2) {
        printf("Vencedor do atributo: Carta 2\n");
    } else {
        printf("Resultado do atributo: Empate\n");
    }

//Mostrando a somada dos atibutos de cada carta
    printf("\n--- SOMA DOS ATRIBUTOS ---\n");
    printf("Carta 1: %.2f\n", carta1_soma);
    printf("Carta 2: %.2f\n", carta2_soma);


//Mostrando o resultado final das soma deles
    if (carta1_soma > carta2_soma) {
        printf("Carta 1 venceu! [%.2f] x [%.2f]\n", carta1_soma, carta2_soma);
    } else if (carta2_soma > carta1_soma) {
        printf("Carta 2 venceu! [%.2f] x [%.2f]\n", carta1_soma, carta2_soma);
    } else {
        printf("Empate! [%.2f] x [%.2f]\n", carta1_soma, carta2_soma);
    }
    printf("========================================\n");

}

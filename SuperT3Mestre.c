#include <stdio.h>
int main() {
    char estado1; 
    char codigo1[5];
    char cidade1[20]; 
    unsigned long int populacao1;
    float area1_km;
    float pib1; 
    int pontos_turisticos1; 
    char nome[50]; 

    char estado2; 
    char codigo2[5]; 
    char cidade2[20];
    unsigned long int populacao2; 
    float area2_km; 
    float pib2; 
    int pontos_turisticos2;

    //Coleta de dados CARTA1:
    printf("Bem vindo ao Super Trunfo, jogador!\nQual o seu nome? "); 
    scanf("%s", nome);  
    printf("Prazer %s, vamos iniciar o jogo.\nCrie a CARTA 1!\n", nome); 
     

    printf("Escolha uma letra de A a H para representar o seu estado: "); 
    scanf(" %c", &estado1); 
    printf("ESTADO: %c\n", estado1);  

    printf("Digite um número de %c01 a %c04 para o seu código: ", estado1, estado1); 
    scanf("%s", codigo1); 
    printf("Código da carta: %s\n", codigo1); 

    printf("Digite o nome da cidade: "); 
    scanf("%s", cidade1);
    printf("Cidade: %s\n", cidade1);

    printf("Digite o tamanho da população de %s: ", cidade1); 
    scanf("%lu", &populacao1);  
    printf("População: %lu habitantes\n", populacao1);  

    printf("Digite o tamanho da área de %s: ", cidade1); 
    scanf("%f", &area1_km); 
    printf("Tamanho da área: %.2f km²\n", area1_km); 
    float densidade1 = (float) populacao1 / area1_km;

    printf("Digite o PIB de %s em bilhões: ", cidade1); 
    scanf("%f", &pib1);  
    printf("PIB: R$%.2f\n", pib1); 
    float pib1_reais = pib1 * 1000000000; 
         

    printf("Digite a quantidade de pontos turísticos: "); 
    scanf("%d", &pontos_turisticos1); 
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);


    //Coleta de dados CARTA 2:  
    printf("Agora vamos criar a segunda carta! Ela deve ser completamente diferente da CARTA 1.\nCARTA 2:\n"); 

    printf("Escolha uma inicial de A a H: ");
    scanf(" %c", &estado2);
    printf("Estado: %c\n", estado2);
    
    printf("Digite um número de %c01 até %c04: ", estado2, estado2); 
    scanf("%s", codigo2); 
    printf("Código da carta: %s\n", codigo2);

    printf("Escolha uma cidade: "); 
    scanf("%s", cidade2);
    printf("Cidade: %s\n", cidade2); 

    printf("Digite o tamanho da população de %s: ", cidade2); 
    scanf("%lu", &populacao2); 
    printf("População: %lu habitantes\n", populacao2); 

    printf("Digite o tamanho da área de %s: ", cidade2); 
    scanf("%f", &area2_km); 
    printf("Área: %.2f km²\n", area2_km);
    float densidade2 = (float) populacao2 / area2_km;  
    

    printf("Digite o pib de %s em bilhões: ", cidade2); 
    scanf("%f", &pib2); 
    printf("PIB: R$%.2f\n", pib2); 
    float pib2_reais = pib2 * 1000000000;

    printf("Digite a quantidade de pontos turísticos de %s: ", cidade2); 
    scanf("%d", &pontos_turisticos2);
    printf("Números de pontos turísticos: %d\n", pontos_turisticos2);
    
    //Escolha primeiro atributo
    char primeiroAtributo; 
    int resultado1 = 0; 
    printf("Batalha de atributos\nEscolha o primeiro atributo para comparação:\n"); 
    printf("A. População\n"); 
    printf("B. Área\n"); 
    printf("C. PIB\n"); 
    printf("D. Pontos turísticos\n"); 
    printf("E. Densidade\n");
    printf("Escolha: ");  
    scanf(" %c", &primeiroAtributo);

    switch(primeiroAtributo) {

        case 'A':
        case 'a': 
            resultado1 = populacao1 > populacao2 ? 1 : 0; 
            printf("População de %s: %lu habitantes - População de %s: %lu habitantes\n", cidade1, 
            populacao1, cidade2, populacao2); 
            
            break; 

        case 'B':
        case 'b': 
            resultado1 = area1_km > area2_km ? 1 : 0; 
            printf("Área de %s: %.2f km² - Área de %s: %.2f km²\n", cidade1, area1_km, cidade2, area2_km); 
            break; 
        
        case 'C':
        case 'c': 
            resultado1 = pib1_reais > pib2_reais ? 1 : 0;
            printf("PIB de %s: %.2f bilhões - PIB de %s: %.2f bilhões\n", cidade1, pib1, cidade2, pib2);  

            break; 

        case 'D':
        case 'd': 
            resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
            printf("Pontos turísticos de %s: %d - Pontos turísticos de %s: %d\n", cidade1, pontos_turisticos1, 
            cidade2, pontos_turisticos2);  

            break; 

        case 'E':
        case 'e': 
            resultado1 = densidade1 < densidade2 ? 1 : 0;
            printf("Densidade de %s: %.2f - Densidade de %s: %.2f\n", cidade1, densidade1, cidade2, densidade2); 

            break; 

        default: 
            printf("Opção inválida!\n"); 
            return 0;
            break; 
    }

    //Escolha do segundo atributo
    char segundoAtributo; 
    int resultado2 = 0; 

    printf("Escolha o segundo atributo (diferente do primeiro)\n"); 
    printf("A. População\n"); 
    printf("B. Área\n"); 
    printf("C. PIB\n"); 
    printf("D. Pontos turísticos\n"); 
    printf("E. Densidade\n");         
    printf("Escolha: ");
    scanf(" %c", &segundoAtributo); 
    
    if (primeiroAtributo == segundoAtributo) {
        printf("Você escolheu o mesmo atributo");
        return 0;  
    } else {

        switch (segundoAtributo) {

            case 'A': 
            case 'a': 
                resultado2 = populacao1 > populacao2 ? 1 : 0; 
                printf("População de %s: %lu habitantes - População de %s: %lu habitantes\n", cidade1, populacao1,
                cidade2, populacao2); 
            
                break; 

            case 'B': 
            case 'b': 
                resultado2 = area1_km > area2_km ? 1 : 0;
                printf("Área de %s: %.2f km² - Área de %s: %.2f km²\n", cidade1, area1_km, cidade2, area2_km);
                
                break; 

            case 'C': 
            case 'c': 
                resultado2 = pib1_reais > pib2_reais ? 1 : 0;
                printf("PIB de %s: %.2f bilhões - PIB de %s: %.2f bilhões\n", cidade1, pib1, cidade2, pib2);

                break; 
            
            case 'D': 
            case 'd':
               resultado2 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
               printf("Pontos turísticos de %s: %d - Pontos turísticos de %s: %d\n", cidade1, pontos_turisticos1,
               cidade2, pontos_turisticos2);

                break; 

            case 'E': 
            case 'e': 
                resultado2 = densidade1 < densidade2 ? 1 : 0;
                printf("Densidade de %s: %.2f - Densidade de %s: %.2f\n", cidade1, densidade1, cidade2, densidade2);

                break; 

            default: 
                printf("Opção inválida\n"); 
                return 0;
                break; 
        }
    }


    //Escolha o terceiro atributo
    char terceiroAtributo; 
    int resultado3 = 0; 

    printf("Escolha o terceiro atributo diferente dos anteriores\n"); 
    printf("A. População\n"); 
    printf("B. Área\n"); 
    printf("C. PIB\n"); 
    printf("D. Pontos turísticos\n"); 
    printf("E. Densidade\n");         
    printf("Escolha: ");
    scanf(" %c", &terceiroAtributo);
    
    if(terceiroAtributo == primeiroAtributo || terceiroAtributo == segundoAtributo) {

        printf("Você escolheu o mesmo atributo que o anterior!\n"); 
        return 0;
    } else {

        switch(terceiroAtributo) {

            case 'A': 
            case 'a': 
                resultado3 = populacao1 > populacao2 ? 1 : 0; 
                printf("População de %s: %lu habitantes - População de %s: %lu habitantes\n", cidade1, populacao1,
                cidade2, populacao2); 
            
                break; 

            case 'B': 
            case 'b': 
                resultado3 = area1_km > area2_km ? 1 : 0;
                printf("Área de %s: %.2f km² - Área de %s: %.2f km²\n", cidade1, area1_km, cidade2, area2_km);
                
                break; 

            case 'C': 
            case 'c': 
                resultado3 = pib1_reais > pib2_reais ? 1 : 0;
                printf("PIB de %s: %.2f bilhões - PIB de %s: %.2f bilhões\n", cidade1, pib1, cidade2, pib2);

                break; 
            
            case 'D': 
            case 'd':
               resultado3 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
               printf("Pontos turísticos de %s: %d - Pontos turísticos de %s: %d\n", cidade1, pontos_turisticos1,
               cidade2, pontos_turisticos2);

                break; 

            case 'E': 
            case 'e': 
                resultado3 = densidade1 < densidade2 ? 1 : 0;
                printf("Densidade de %s: %.2f - Densidade de %s: %.2f\n", cidade1, densidade1, cidade2, densidade2);

                break; 

            default: 
                printf("Opção inválida\n");
                return 0; 
                break;
        }

    }
    
    //Escolha o quarto atributo
    char quartoAtributo; 
    int resultado4 = 0; 

    printf("Escolha o quarto atributo diferente dos anteriores\n"); 
    printf("A. População\n"); 
    printf("B. Área\n"); 
    printf("C. PIB\n"); 
    printf("D. Pontos turísticos\n"); 
    printf("E. Densidade\n");         
    printf("Escolha: ");
    scanf(" %c", &quartoAtributo);

    if(quartoAtributo == terceiroAtributo || quartoAtributo == segundoAtributo || 
    quartoAtributo == primeiroAtributo) {

        printf("Você escolheu o mesmo atributo que o anterior!\n"); 
        return 0;
    } else {

        switch (quartoAtributo) {

            case 'A': 
            case 'a': 
                resultado4 = populacao1 > populacao2 ? 1 : 0; 
                printf("População de %s: %lu habitantes - População de %s: %lu habitantes\n", cidade1, populacao1,
                cidade2, populacao2); 
            
                break; 

            case 'B': 
            case 'b': 
                resultado4 = area1_km > area2_km ? 1 : 0;
                printf("Área de %s: %.2f km² - Área de %s: %.2f km²\n", cidade1, area1_km, cidade2, area2_km);
                
                break; 

            case 'C': 
            case 'c': 
                resultado4 = pib1_reais > pib2_reais ? 1 : 0;
                printf("PIB de %s: %.2f bilhões - PIB de %s: %.2f bilhões\n", cidade1, pib1, cidade2, pib2);

                break; 
            
            case 'D': 
            case 'd':
               resultado4 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
               printf("Pontos turísticos de %s: %d - Pontos turísticos de %s: %d\n", cidade1, pontos_turisticos1,
               cidade2, pontos_turisticos2);

                break; 

            case 'E': 
            case 'e': 
                resultado4 = densidade1 < densidade2 ? 1 : 0;
                printf("Densidade de %s: %.2f - Densidade de %s: %.2f\n", cidade1, densidade1, cidade2, densidade2);

                break; 

            default: 
                printf("Opção inválida\n");
                return 0;  
                break;

        
        }
    }
    
    int soma = resultado1 + resultado2 + resultado3 + resultado4; 
            
    printf("Atributos escolhidos: %c, %c, %c, %c\n", primeiroAtributo, segundoAtributo, terceiroAtributo,
    quartoAtributo); 
    if(soma >= 3) {
    printf("****Você venceu!****\n"); 
    } else if(soma == 2){
        printf("*Houve empate!*\n"); 
        } else {
            printf("*Você perdeu!*\n"); 
        }

    return 0;
}
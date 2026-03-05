#include <stdio.h>
int main(){
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


    //exibição menu
    int menu; 
    printf("Batalha de atributos\nEscolha um atributo para comparação: \n"); 
    printf("1. População\n"); 
    printf("2. Área\n"); 
    printf("3. PIB\n"); 
    printf("4. Pontos turísticos\n"); 
    printf("5. Densidade\n"); 
    scanf("%d", &menu); 

    //comparação
    switch(menu) {

        case 1: 
            printf("População de %s x População de %s\n", cidade1, cidade2 );
            if (populacao1 > populacao2) 
            {
               printf("****CARTA 1 Venceu!****"); 
               printf("População de %s: %lu - População de %s: %lu", cidade1, populacao1, cidade2, populacao2); 
            } else if (populacao2 > populacao1) {
                 printf("****CARTA 2 VENCEU!****\n"); 
                printf("População de %s: %lu - População de %s: %lu", cidade1, populacao1, cidade2, populacao2);
            } else {
                printf("*EMPATE!*\n"); 
                printf("%s: %lu - %s: %lu", cidade1, populacao1, cidade2, populacao2);
            }
            break; 

        case 2: 
            printf("Área de %s x Área de %s\n", cidade1, cidade2); 
            if(area1_km > area2_km) {
                printf("****CARTA 1 VENCEU****\n"); 
                printf("%s: %.2f km² - %s: %.2f km²", cidade1, area1_km, cidade2, area2_km); 
            } else if (area1_km < area2_km) {
                printf("****CARTA 2 VENCEU!****\n"); 
                printf("%s: %.2f km² - %s: %.2f km²", cidade1, area1_km, cidade2, area2_km); 
            } else {
                printf("*EMPATE!*\n"); 
                printf("%s: %.2f km² - %s: %.2f km²", cidade1, area1_km, cidade2, area2_km); 
            } 
            break; 
        case 3: 
            printf("PIB de %s x PIB de %s\n", cidade1, cidade2);
            if (pib1_reais > pib2_reais) {
                printf("****CARTA 1 VENCEU****\n"); 
                printf("PIB de %s: R$%.2f - PIB de %s: R$%.2f", cidade1, pib1, cidade2, pib2); 
            } else if (pib1_reais < pib2_reais) {
                printf("****CARTA 2 VENCEU!****\n"); 
                printf("PIB de %s: R$%.2f - PIB de %s: R$%.2f", cidade1, pib1, cidade2, pib2); 
            } else {
                printf("*EMPATE!*");
                printf("PIB de %s: R$%.2f - PIB de %s: R$%.2f", cidade1, pib1, cidade2, pib2);    
            }
            break; 
        case 4: 
            if(pontos_turisticos1 > pontos_turisticos2) {
                printf("****CARTA 1 VENCEU!****\n");
                printf("Pontos turísticos de %s: %d - Pontos turísticos de %s: %d\n", cidade1, pontos_turisticos1, cidade2, pontos_turisticos2);      
                
            } else if (pontos_turisticos1 < pontos_turisticos2) {
                printf("****CARTA 2 VENCEU****\n"); 
                printf("Pontos turísticos de %s: %d - Pontos turísticos de %s: %d\n", cidade1, pontos_turisticos1, cidade2, pontos_turisticos2);

            } else {
                printf("*EMPATE!*\n");
                printf("Pontos turísticos de %s: %d - Pontos turísticos de %s: %d",cidade1, pontos_turisticos1, cidade2, pontos_turisticos2); 
            }
            break; 
        case 5: 
            printf("Densidade de %s x densidade de %s\n", cidade1, cidade2); 
            if (densidade1< densidade2) {
                printf("****CARTA 1 VENCEU!****\n"); 
                printf("Densidade de %s: %.2f x densidade de %s: %.2f", cidade1, densidade1, cidade2, densidade2); 
            } else if (densidade1 > densidade2) {
                printf("****CARTA 2 VENCEU!****\n"); 
                printf("Densidade de %s: %.2f x densidade de %s: %.2f", cidade1, densidade1, cidade2, densidade2); 
            } else {
                printf("*EMPATE!*\n");
                printf("Densidade de %s: %.2f x densidade de %s: %.2f", cidade1, densidade1, cidade2, densidade2); 
            } 
            break; 
        default: 
            printf("Opção inválida!");
            break; 
        } 

   return 0; 
}

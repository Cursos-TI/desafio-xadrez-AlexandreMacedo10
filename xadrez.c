#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Constantes do Nível Mestre
const int CASAS_TORRE = 5;
const int CASAS_BISPO = 5;
const int CASAS_RAINHA = 8;

// ================= NIVEL MESTRE: FUNCOES RECURSIVAS =================
void moverTorreRecursivo(int casas) {
    if(casas <= 0) {
        return;
    }
    printf("Direita\n");
    moverTorreRecursivo(casas - 1);
}

void moverRainhaRecursivo(int casas) {
    if(casas <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainhaRecursivo(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if(casas <= 0) {
        return;
    }
    for(int i = 0; i < 1; i++) {
        for(int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }
    moverBispoRecursivo(casas - 1);
}

void moverCavaloMestre() {
    printf("\n=== CAVALO MESTRE ===\n");
    const int CASAS_CIMA = 2;
    const int CASAS_DIREITA = 1;
    
    for(int i = 0, j = 0; i < CASAS_CIMA; i++) {
        printf("Cima\n");
        if(i < CASAS_CIMA - 1) {
            continue;
        }
        while(j < CASAS_DIREITA) {
            printf("Direita\n");
            j++;
            break;
        }
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    printf("\n=== TORRE ===\n");
    for(int t = 0; t < 5; t++){
        printf("Direita\n");
    }
    printf("\n=== BISPO ===\n");
    int b = 0;
    while(b < 5){
        printf("Cima Direita\n");
        b++;
    }
    printf("\n=== RAINHA ===\n");
    int r = 0;
    do{
        printf("Esquerda\n");
        r++;
    }while(r < 8);

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\n=== CAVALO ===\n");
    const int MOV_BAIXO = 2;  
    const int MOV_ESQUERDA = 1;
    
    for(int i = 0; i < MOV_BAIXO; i++) {
        printf("Baixo\n");
        int j = 0;
        while(j < MOV_ESQUERDA && i == MOV_BAIXO - 1) {
            printf("Esquerda\n");
            j++;
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    
    // ===== EXECUCAO DO NIVEL MESTRE =====
    printf("\n\n======== NIVEL MESTRE ========\n");
    
    printf("\n=== TORRE RECURSIVA ===\n");
    moverTorreRecursivo(CASAS_TORRE);
    
    printf("\n=== BISPO RECURSIVO COM LOOPS ANINHADOS ===\n");
    moverBispoRecursivo(CASAS_BISPO);
    
    printf("\n=== RAINHA RECURSIVA ===\n");
    moverRainhaRecursivo(CASAS_RAINHA);
    
    moverCavaloMestre();

    return 0;
}
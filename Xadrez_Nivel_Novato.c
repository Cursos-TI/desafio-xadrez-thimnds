#include <stdio.h>

int main(){
    //Mover a Torre 5 casas para a direita
    for (int i = 0; i < 5; i++)
    {
        printf("Movimento da Torre: Direita\n"); // imprime a direção do movimento
    }
    
    //Mover o Bispo 5 casas na diagonal para cima e à direita
    int Bispo = 1;  // variavel bispo declarada
    
    while (Bispo <= 5) // movimentos limites do bispo
    {
        printf("Movimento do Bispo: Cima, Direita\n", Bispo); // imprime a movimentação do Bispo
        
        Bispo++;
    }

    //Mover a rainha 8 casas para a esquerda.

    int Rainha = 1; // variavel rainha declarada
    do  
    {
        printf("Movimento da Rainha: Esquerda\n", Rainha); // imprime a movimentação da rainha
        Rainha++;
    } while (Rainha <= 8); // movimentos limites da rainha
      
    return 0;
}
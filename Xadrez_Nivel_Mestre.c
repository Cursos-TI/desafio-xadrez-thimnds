#include <stdio.h>

void moverTorre(int casas){
    if (casas > 0){
        printf("Movimento da Torre: Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas){
    if (casas > 0){
        printf("Movimento do Bispo: Cima, Direita\n");
        moverBispo(casas - 1);
    }   
}

void moverRainha(int casas){
    if (casas > 0){
        printf("Movimento da Rainha: Esquerda\n");
        moverRainha(casas - 1);
    }   
}

void moverCavalo(int casas){
    if (casas > 0){
        printf("Movimento do Cavalo: Baixo\n");
        printf("Movimento do Cavalo: Baixo\n");
        printf("Movimento do Cavalo: Esquerda\n");
        moverCavalo(casas - 1);
    }   
}

int main(){
    moverTorre(5); 
    moverBispo(5);
    moverRainha(8);
    moverCavalo(1);

    return 0;
}
    
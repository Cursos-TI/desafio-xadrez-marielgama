#include <stdio.h>

void moverTorre (int casas) {
        if (casas > 0){
            printf("cima\n");
            moverTorre(casas - 1);
        }
    }


void moverRainha (int casas) {
    if (casas > 0){
        printf("esquerda\n");
        moverRainha(casas - 1);
    }
}


/*
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima Direita\n"); 
        moverBispo(casas - 1);
    }
}
*/



int main() {


    printf("................. MOVER TORRE ................. \n");
    moverTorre(5);  
    printf("\n");
    printf("................. MOVER RAINHA ................. \n");
    moverRainha(7);  
    printf("\n");
    printf("................. MOVER BISPO .................. \n");
    
    // For - so sai da condiçao quando for falso.
    for (int i = 0, j = 0; i < 5 && j < 5; i++, j++) {
            if (i == j) {
                printf("Cima Direita\n");
            }
    }


    // CAVALO
    printf("\n");
    printf("................. MOVER CAVALO .................. \n");
    const int CASAS_CIMA = 2;
    const int CASAS_DIREITA = 1;

    int k = 0;
    int m = 0;

    while (k < CASAS_CIMA) {
        printf("Cima\n");
        k++;

       
        if (k == CASAS_CIMA) {
            
           
            for (m = 0; m < CASAS_DIREITA; m++) {
                printf("Direita\n");
            }
        }
    }

    

    return 0;
}



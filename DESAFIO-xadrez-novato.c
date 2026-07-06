// Desafio Nível Novato

#include <stdio.h>


int main() {
    
   int t; 
   int b = 1;
   int r = 1;
   int c = 1;

   
   // Torre
   printf("\n");
   printf("O movimento da peça Torre foi: \n");
   for (t = 1; t <= 5; t++) {
        printf("Direita\n");
   }
   
   // Bispo
   printf("\n");
   printf("O movimento da peça Bispo foi: \n");

   while (b <= 5) 
    {
        printf("Cima Direita\n");
        b++;
    }
 

    // Rainha
    printf("\n");
    printf("O movimento da peça Rainha foi: \n");

    do {
        printf("Esquerda\n");
        r++;
    } while (r <= 8); 


    // Cavalo
    printf("\n");
    printf("O movimento da peça Cavalo foi: \n");

    while (c--) 
        {
            for (int d = 0; d < 2; d++) {
                printf("Baixo\n");
            }
            printf("Esquerda\n");
        }
    
    

    return 0;

}

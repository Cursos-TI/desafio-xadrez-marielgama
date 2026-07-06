#include <stdio.h>

int main() {
   
    printf("\n");

    const int CASAS_BAIXO = 2;
    const int CASAS_ESQUERDA = 1;

   
    int i = 0;
    int j = 0;

 
    while (i < CASAS_BAIXO) {
        printf("Baixo\n");
        i++;

       
        if (i == CASAS_BAIXO) {
            
           
            for (j = 0; j < CASAS_ESQUERDA; j++) {
                printf("Esquerda\n");
            }
        }
    }

    return 0;
}

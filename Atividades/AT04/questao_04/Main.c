#include <stdio.h>

#include "Functions.h"

int main(void)
{
    int array[3];

    printf("Informe três números: ");

    ler3Numeros(array);
 
    printf("[");
    for(int i = 0; i < 3; i++){
    
        printf(" %d", array[i]);

    }
    printf(" ]");

    return 0;

}


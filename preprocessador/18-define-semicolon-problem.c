//18.  O Código 7 calcula o valor errado para SIZE. Porque?
/*
#include <stdio.h>

#define SIZE 10;
#define FUDGE (SIZE - 2);

int main() {
    int size;
    size = FUDGE;
    printf("Size is %d\n", size); // Esperado: 8
    return 0;
}
*/

//Exemplo com correção:
#include <stdio.h>

#define SIZE 10   // sem o ponto e vírgula!
#define FUDGE (SIZE - 2)

int main() {
    int size;
    size = FUDGE;
    printf("Size is %d\n", size); // Esperado: 8
    return 0;
}

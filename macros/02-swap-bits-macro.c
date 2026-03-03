//2. Crie uma macro chamada swap_bits(x, i, j) que troque os bits nas posições i e j da variável x.


#include <stdio.h>

#define swap_bits(x, i, j) \
    do { \
        if (((x >> i) & 1) != ((x >> j) & 1)) { \
            x ^= (1 << i) | (1 << j); \
        } \
    } while (0)

int main() {
    unsigned char x = 0b10000001;
    swap_bits(x, 0, 7); // troca os extremos
    printf("Resultado: 0x%02X\n", x); // Esperado: 0x81
    return 0;
}
